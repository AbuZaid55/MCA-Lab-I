#include <iostream>
using namespace std;

void printArrRecursive(int arr[], int start, int size){
	if(start >= size) return;
	
	cout<< arr[start] << " ";
	
	printArrRecursive(arr, start + 1, size);
}

int main(){
	
	int arr[] = {10,5,3,8,12,9};
	
	int size = sizeof(arr)/ sizeof(arr[0]);
	
	printArrRecursive(arr, 0, size);
	
	return 0;
}
