#include <iostream>
#include <algorithm>


using std::cout;
using std::cin;
using std::endl;

int* foo(int* arr, const int size, int* arr1, const int size1, int* arr2){
		
	std::merge(arr, (arr + size), arr1, (arr1 + size1), arr2);	
	return arr2;
}


int main () {
	
	const int size = 6;
	const int size1 = 5;
	int arr[size] {1,2,3,4,5,6};
	int arr1[size1] {-10,-1,1,30,41};
	int arr2[size+size1] = {0};
	
	foo(arr, size, arr1, size1, arr2);
	
	for(int i = 0; i < (size+size1); ++i){
		cout << arr2[i] << "  ";}
	
	}
