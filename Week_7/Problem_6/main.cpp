#include <iostream>
using namespace std;

class Flight{
	int number;
	string source;
	string distination;
	float fare;
	
	public:
		void setData(int number, string source, string distination, float fare){
			this->number = number;
			this-> source = source;
			this-> distination = distination;
			this->fare = fare;
		}
		
		void display(){
			cout<<"Flight Number: "<<number<<endl;
			cout<<"Source: "<< source << endl;
			cout<< "Distination: "<< distination<< endl;
			cout<< "Fare: "<< fare << endl;
		}
	
};

int main(){
	Flight f;
	f.setData(101,"Varansi (VNS)","Chennai (MAA)", 7000.00);
	f.display();
	return 0;
}
