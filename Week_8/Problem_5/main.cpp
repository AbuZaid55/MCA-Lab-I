#include <iostream>
#include <string>
using namespace std;

int main(){
	string S = "Hello Zaid";
	string T = "Zaid";
	
	int start = 0;
	int pos = -1;
	
	while (start < S.size()){

		if(S[start] == T[0]){
			int i = start + 1;
			int j = 1;
			
			while(i < S.size() && j < T.size() && S[i] == T[j]){
				i++;
				j++;
			}
			
			if(j == T.size()){
				pos = start;
				break;
			}
		}
		
		start ++;
	}
	
	if(pos == -1){
		cout << "1 "<<endl;
		return 0;
	}
	
	cout<< "Position of string is: "<<pos<<endl;
	return 0;
}

