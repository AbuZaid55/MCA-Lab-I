#include <iostream>
using namespace std;

int main(){
	int arr[] = {10,5,1,8,7,6,5,12};
	int *ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int sum = 0;
	for(int i = 0; i<size; i++){
		sum += *(ptr + i);
	}
	
	cout << "Sum of element: "<< sum << endl;
	return 0;
}
