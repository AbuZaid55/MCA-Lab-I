#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double arr[] = {10,5,1,8,7,6,5,12};
	double *ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	
	double sum = 0;
	for(int i = 0; i<size; i++){
		sum += *(ptr + i);
	}
	
	double mean = sum / size;

	double variance = 0;
	for(int i = 0; i<size; i++){
		variance += (*ptr - mean) * (*ptr - mean);
		ptr++;
	}
	
	double standerdDevi = sqrt(variance / size);
	
	cout << "Sum of element: "<< sum << endl;
	cout << "Mean: "<< mean << endl;
	cout << "Standerd Deviation: "<< standerdDevi << endl;
	return 0;
}
