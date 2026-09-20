#include <iostream>
using namespace std;

int main(){
	string text = "the cat sat on the mat and the cat slept";
	string word = "cat";
	
	int left = 0;
	int count = 0;
	while(left < text.length()){
		if(text[left] == word[0]){
			int p1 = left + 1;
			int p2 = 1;
			
			while(p1 < text.length() && p2< word.length() && text[p1] == word[p2]){
				p1++;
				p2++;
			}
			
			if(p2 == word.length()){
				count++;
			}
		}
		left++;
	}
	
	cout << "Total: "<< count << endl;
	return 0;
}
