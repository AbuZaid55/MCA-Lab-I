#include <iostream>
using namespace std;

struct DOB {
	int day;
	int month;
	int year;	
};

struct Person {
	string name;
	DOB dob;
};

int main(){
	
	Person p;
	
	cout<< "Enter you name: ";
	getline(cin, p.name);
	
	cout<< "Enter you dob (day month year) ";
	cin >> p.dob.day >> p.dob.month >> p.dob.year;
	
	cout << "\nName: " << p.name << endl;
	cout << "DOB: " << p.dob.day<< "/" << p.dob.month << "/" << p.dob.year;
	
	return 0;
}
