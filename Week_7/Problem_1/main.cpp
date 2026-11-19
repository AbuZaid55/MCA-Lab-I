#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str = "Hello World";
	int count = 0;

	char* ptr = &str[0];
	while(*ptr != '\0'){
		char ch = *ptr;
		ch = tolower(ch);
		if(ch == 'a' || ch == 'e' || ch=='i' || ch == 'o' || ch == 'u'){
			count++;
		}
		ptr++;
	}
	cout<< count<< endl;
	
	
	return 0;
}
