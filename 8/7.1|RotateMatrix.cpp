#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Print90Degress(int** arr, int N){

	for(int i = 0; i < N; ++i){
		for(int j = N-1; j >= 0; --j){
			cout << arr[j][i] << "\t";
		}
	cout << endl;
	}

}
