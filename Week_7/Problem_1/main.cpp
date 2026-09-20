#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str = "Hello World";
	int count = 0;
	for(int i = 0; i<str.length(); i++){
		char ch = str[i];
		ch = tolower(ch);
		if(ch == 'a' || ch == 'e' || ch=='i' || ch == 'o' || ch == 'u'){
			count++;
		}
	}
	cout<< count<< endl;
	return 0;
}
