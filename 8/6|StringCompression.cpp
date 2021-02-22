#include <iostream>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


void strComp(string inputString) {
	int count = 1;
	int countE = 0;
	int tmp = 1;
	
	for ( int i = 0, j = 1; j <= (int)inputString.length(); ++i,++j ){
		if( inputString[i] == inputString[j]){
				++tmp;
			}
		else if(tmp > 2){
			countE += (tmp-2);
			tmp = 1;
		}
		else if(tmp == 1){
			--countE;
		}
		else tmp = 1;
	}
	
	if (countE <= 0) {
		cout << inputString << endl;
		return;
	}
	
	for ( int i = 0, j = 1; j <= (int)inputString.length(); ++i,++j ){
			if( inputString[i] == inputString[j]){
				++count;
			}
			else {
					cout << inputString[i];
					cout << count;
					count = 1;
			}		
	}
}
