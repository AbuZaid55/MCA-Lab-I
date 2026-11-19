#include <iostream>
using namespace std;

int main(){
	int num, choice;
	int d1, d2, d3, d4, reverseNum;
	cout << "Enter you 4 digit number: ";
	cin >> num;
	
	d1 = num / 1000;
	d2 = (num / 100) % 10;
	d3 = (num / 10) % 10;
	d4 = num % 10;
	
	reverseNum = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
	
	do {
		cout << "\n----- MENU -----\n"; 
		cout << "1. Reverse of the number\n"; 
		cout << "2. Sum of number and its reverse\n";
		cout << "3. Sum of alternative digits\n"; 
		cout << "4. Exit\n";
		cout << "Enter your choice: "; 
		cin >> choice;
		
		cout << "\n----- OUTPUT -----\n"; 
	
		switch(choice){
			case 1:
				cout << "Reverse = " << reverseNum << endl;
				break;
			case 2:
				cout << "Sum = " << num + reverseNum << endl;
				break;
			case 3:
				cout << "1st digit + 3rd digit = " << d1 + d3 << endl; 
				cout << "2nd digit + 4th digit = " << d2 + d4 << endl;
				break;
			case 4:
				cout << "Program terminated." << endl;
				break;
			default:
				cout << "Invalid choice! Please try again." << endl;	
		}
	}while(choice != 4);
	
	return 0;
}
