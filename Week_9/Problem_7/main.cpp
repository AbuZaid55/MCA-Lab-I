#include <iostream>
using namespace std;

void findMaxMinElement(int arr[], int start, int size, int max, int min){
	if(start >= size) {
		cout<< "Max element: "<< max << endl;
		cout<< "Min element: "<< min<< endl;
		return;
	};
	
	int element = arr[start];
	
	if(element > max){
		max = element;
	}else if(element < min){
		min = element;
	}
	
	findMaxMinElement(arr, start + 1, size, max, min);
}

int main(){
	
	int arr[] = {10,5,3,8,12,9};
	
	int size = sizeof(arr)/ sizeof(arr[0]);
	
	findMaxMinElement(arr, 0, size, arr[0], arr[0]);
	
	return 0;
}
