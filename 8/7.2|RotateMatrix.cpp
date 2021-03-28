#include <iostream>

using std::cin;
using std::cout;
using std::endl;


void RotateMatrix(int** arr, int N){
	
	int newArray[N][N] = {0};
	
	for(int i = 0; i < N; ++i){
		for(int j = N-1, ix = 0; j >= 0; --j, ++ix){
			newArray[i][ix] = arr[j][i];
		}
	}
	
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < N; ++j)
			arr[i][j] = newArray[i][j];
	}
}
