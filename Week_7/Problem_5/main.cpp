#include <iostream>
using namespace std;

class Number{
	int a;
	int b;
	
	public:
		Number(int a, int b){
			this->a = a;
			this->b = b;
		}
		int getMax(){
			if(this->a > this->b){
				return this->a;
			}else {
				return this->b;
			}
		}
};

int main(){
	Number obj(10,25);
	cout<< obj.getMax() << endl;
}
