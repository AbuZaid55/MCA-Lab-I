#include <iostream>
using namespace std;

int fectorial(int n){
	if(n < 1){
		return 1;
	}
	return n * fectorial(n-1);
}

int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	
	return gcd(b, a % b);
}

int main(){
	
	int numToFindFac = 4;
	int recFac = fectorial(numToFindFac);
	cout<<"Ans of factorial using recursize method: "<<recFac<<endl;
	
	int iterativeFec = 1;
	while(numToFindFac != 0){
		iterativeFec *= numToFindFac;
		numToFindFac--;
	}
	cout<<"Ans of factorial using iterative method: "<<iterativeFec<<endl;
	
	int num1ToFindGcd = 48;
	int num2ToFindGcd = 18;
	
	int gcdResult = gcd(num1ToFindGcd, num2ToFindGcd);
	cout<<"Ans of Gcd using recursize method: "<< gcdResult << endl;
	
	while(num2ToFindGcd != 0){
		int temp = num1ToFindGcd;
		num1ToFindGcd = num2ToFindGcd;
		num2ToFindGcd = temp % num2ToFindGcd;
	}
	cout<<"Ans of Gcd using iterative method: "<< num1ToFindGcd << endl;
	
	return 0;
}





