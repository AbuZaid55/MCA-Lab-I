#include <iostream>
using namespace std;

bool isPalindrome(string str){
	int left = 0;
	int right = str.length() - 1;
	
	while(left < right){
		if(str[left] != str[right]){
			return false;
		}
		left++;
		right--;
	}
	
	return true;
}
int main(){
	string str;
	cout << "Enter your string: ";
	cin>> str;
	
	string result = isPalindrome(str) ? "This is a palindrome" : "This is not a palindrome";
	cout<< result << endl;
	return 0;
}
