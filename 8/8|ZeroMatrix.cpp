#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Zero(int** arr, int row, int col, int is, int js){
	
	for( int ix = is; ix < col; ++ix ){
		arr[is][ix] = 0;
	}
	for(int jx = js; jx < row; ++jx){
		arr[jx][js] = 0;
		}	
}
