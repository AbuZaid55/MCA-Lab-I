
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BST {
    Node* root;

    // Insert operation
    Node* insert(Node* node, int value) {
        if (node == NULL) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        }
        else if (value > node->data) {
            node->right = insert(node->right, value);
        }

        return node;
    }

    // Search operation
    bool search(Node* node, int value) {
        if (node == NULL) {
            return false;
        }

        if (value == node->data) {
            return true;
        }
        else if (value < node->data) {
            return search(node->left, value);
        }
        else {
            return search(node->right, value);
        }
    }

    // Find minimum value
    Node* findMin(Node* node) {
        while (node->left != NULL) {
            node = node->left;
        }

        return node;
    }

    // Delete operation
    Node* deleteNode(Node* node, int value) {
        if (node == NULL) {
            return NULL;
        }

        if (value < node->data) {
            node->left = deleteNode(node->left, value);
        }
        else if (value > node->data) {
            node->right = deleteNode(node->right, value);
        }
        else {
            // Case 1: No child
            if (node->left == NULL && node->right == NULL) {
                delete node;
                return NULL;
            }

            // Case 2: One child
            else if (node->left == NULL) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == NULL) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            // Case 3: Two children
            Node* temp = findMin(node->right);

            node->data = temp->data;

            node->right = deleteNode(node->right, temp->data);
        }

        return node;
    }

    // Inorder traversal
    void inorder(Node* node) {
        if (node == NULL) {
            return;
        }

        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

public:
    BST() {
        root = NULL;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    void search(int value) {
        if (search(root, value)) {
            cout << value << " found in BST." << endl;
        }
        else {
            cout << value << " not found in BST." << endl;
        }
    }

    void deleteValue(int value) {
        root = deleteNode(root, value);
    }

    void display() {
        cout << "BST (Inorder): ";
        inorder(root);
        cout << endl;
    }
};

int main() {
    BST tree;

    // Insertion
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "After Insertion:" << endl;
    tree.display();

    // Search
    cout << "\nSearch Operation:" << endl;
    tree.search(40);
    tree.search(90);

    // Deletion
    cout << "\nDeleting 30..." << endl;
    tree.deleteValue(30);

    cout << "After Deletion:" << endl;
    tree.display();

    return 0;
}
