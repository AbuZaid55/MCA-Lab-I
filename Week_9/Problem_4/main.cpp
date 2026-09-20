#include <iostream>
using namespace std;

void swap_reference(int& a, int& b){
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "\nAfter swapping (Call by Reference):" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}	

void swap_value(int a, int b){
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "\nAfter swapping (Call by Value):" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(){
	int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nChoose an option:" << endl;
    cout << "1. Swap using Call by Value" << endl;
    cout << "2. Swap using Call by Reference" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

	
	switch(choice){
		case 1:
			swap_value(a, b);
			break;
		case 2:
			swap_reference(a,b);
			break;
		default:
			cout<< "Invalid choice "<<endl;	
	}
	return 0;
}









