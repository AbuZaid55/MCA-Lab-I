#include <iostream>
using namespace std;

int main(){
	string sentance = "Hello Zaid";
	string oldStr = "ello";
	string newStr = "i";
	
	int start = 0;
	int pos = -1;
	
	while (start < sentance.size()){

		if(sentance[start] == oldStr[0]){
			int i = start + 1;
			int j = 1;
			
			while(sentance[i] == oldStr[j]){
				i++;
				j++;
			}
			
			if(j == oldStr.size()){
				pos = start;
			}
		}
		
		start ++;
	}
	
	if(pos == -1){
		cout << "Match string not found! "<<endl;
		return 0;
	}
	
	string result = "";
	for(int i = 0; i<sentance.size(); i++){
		if(i == pos){
			for(int j = 0; j<newStr.size(); j++){
				result += newStr[j];
			}
		}else if(i > pos && i< pos + oldStr.size()){
			continue;
		}else{
			result += sentance[i];
		}
	}
	
	cout<< result;
	return 0;
}

