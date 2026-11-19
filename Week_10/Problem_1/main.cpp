#include <iostream>
using namespace std;

struct Complex {
	float real;
	float imag;
};

void readComplex(Complex &c){
	cout<< "Enter real part: ";
	cin>>c.real;
	
	cout<< "Enter imaginary part: ";
	cin>> c.imag;
}

void display(Complex &c){
	if(c.imag > 0){
		cout<< c.real << " + " << c.imag << "i"<<endl;
	}else{
		cout<< c.real << " - " << -c.imag << "i"<<endl;
	}
}

Complex add(Complex &c1, Complex &c2){
	Complex result;
	
	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;
	
	return result;
}

Complex subtract(Complex &c1, Complex &c2){
	Complex result;
	
	result.real = c1.real - c2.real;
	result.imag = c1.imag - c2.imag;
	
	return result;
}

Complex mul(Complex &c1, Complex &c2){
	Complex result;
	
	result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
	result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
	
	return result;
}

int main(){
	Complex c1, c2;
	
	readComplex(c1);
	readComplex(c2);
	
	display(c1);
	display(c2);
	
	Complex result = add(c1, c2);
	display(result);
	
	result = subtract(c1, c2);
	display(result);
	
	result = mul(c1, c2);
	display(result);
	
	return 0;
}







