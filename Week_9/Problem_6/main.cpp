#include <iostream>
using namespace std;

int sumOfArrRecursive(int arr[], int start, int size, int sum){
	if(start >= size) return sum;
	
	sum += arr[start];
	
	sumOfArrRecursive(arr, start + 1, size, sum);
}

int main(){
	
	int arr[] = {10,5,3,8,12,9};
	
	int size = sizeof(arr)/ sizeof(arr[0]);
	
	int sum = sumOfArrRecursive(arr, 0, size, 0);
	
	cout<< "Sum of element: "<< sum << endl;
	
	return 0;
}
