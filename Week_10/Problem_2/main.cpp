#include <iostream>
#include <string>
using namespace std;

struct Employee {
	string name;
	float basicPay;
};

int main(){
	int size = 2;
	Employee empList[size];
	
	for	(int i = 0; i<size; i++){
		cout<< "Enter details of employee " << i + 1 << endl;
		
		cout << "Name: ";
		cin>> empList[i].name;
		
		cout<< "Basic Pay: ";
		cin>> empList[i].basicPay;
	}
	
	cout<< "\n ----- Employee salary details -----"<<endl;
	
	for(int i = 0; i<size; i++){
		float grossSalary = empList[i].basicPay + (empList[i].basicPay * 0.52);
		cout<< "Name: "<< empList[i].name << " \nGross Salary: "<< grossSalary << endl;
	}
	
	
	return 0;
}
