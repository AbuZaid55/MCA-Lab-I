#include <iostream>
using namespace std;

class pntr_obj{
	int rollNo;
	string name;
	
	public:
		void set_data(int rollNo, string name){
			this -> rollNo = rollNo;
			this -> name = name;
		};
		
		void print(){
			cout<<"Roll No: "<< this -> rollNo << endl;
			cout<<"Name: "<< this -> name << endl;
			cout<< "Object Address: "<< this<< endl;
			cout<< "---------------------------"<<endl;
		};
};

int main(){
	pntr_obj obj1, obj2, obj3;
	
	obj1.set_data(113,"Abu Zaid");
	obj2.set_data(1,"XYZ");
	obj3.set_data(2,"ABC");
	
	obj1.print();
	obj2.print();
	obj3.print();
	
	return 0;
}
