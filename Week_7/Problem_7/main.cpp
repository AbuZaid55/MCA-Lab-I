#include <iostream>
using namespace std;

class Demo
{
    int value;

public:
    Demo(int value){
        this->value = value;
    }

    Demo* getObject(){
        return this;
    }

    void display(){
        cout << "Value = " << value << endl;
    }
};

int main(){
    Demo obj(200);

    Demo* ptr = obj.getObject();

    ptr->display();

    return 0;
}

