#include<iostream>
#include <vector>
using namespace std;

void printTransposeOfMatrix(vector<vector<int> >& matrix){
	int rowSize = matrix.size();
	int colSize = matrix[0].size();
	
	for(int col = 0; col<colSize; col++){
		for(int row = 0; row<rowSize; row++){
			cout<< " " << matrix[row][col];
		}
		cout<<endl;
	}
}

int main(){
	vector<vector<int> > matrix(3, vector<int>(3));

    matrix[0][0] = 4;
    matrix[0][1] = 6;
    matrix[0][2] = 8;

    matrix[1][0] = 9;
    matrix[1][1] = 5;
    matrix[1][2] = 2;
    
    matrix[2][0] = 10;
    matrix[2][1] = 12;
    matrix[2][2] = 77;
    
	printTransposeOfMatrix(matrix);
	return 0;
}
