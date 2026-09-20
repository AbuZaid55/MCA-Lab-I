#include <iostream>
using namespace std;

string insertString(string mainString, string givenString, int pos){

	string result = "";
	
	for(int i = 0; i<mainString.length(); i++){
		if(i == pos){
			for(int j = 0; j<givenString.length(); j++){
				result += givenString[j];
			}			
		}
		result += mainString[i];
	}
	
	return result;
}

string deleteString(string mainString, int n, int pos){
	string result = "";
	for(int i = 0; i<mainString.length() ; i++){
		if(i >= pos && i < pos+n){
			continue;
		}
		
		result += mainString[i];
	}	
	
	return result;
}

int main(){
	string result_1 = insertString("My name is Zaid", " Abu", 10);
	string result_2 = deleteString("My name is Abu Zaid", 4, 10);
	cout<<result_1<< endl;
	cout<< result_2<<endl;
	return 0;
}
