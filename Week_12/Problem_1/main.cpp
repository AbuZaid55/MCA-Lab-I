#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
	int rollNo;
	
	public:
		Student(){
			name = "Abu Zaid";
			rollNo = 113;
		}
		void display(){
			cout<< "Name: " << this->name << endl;
			cout<< "Roll No: " << this-> rollNo<< endl;
		}
};

int main(){
	Student st;
	st.display();
	return 0;
}
