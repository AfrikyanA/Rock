#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;


void RK_Search(const string& longText, const string& shortText ){
	
	vector <int> v;
	int sizeL =  longText.length();
	int sizeS = shortText.length();
	
	for(int i = 0, j = 0; i < sizeL;){
		if( longText[i] == shortText[j] ){
			
			if( j == sizeS-1 ){
				v.push_back(i-j);
				j = 0;
			}
			++i; ++j;
			
		}
		else {
			++i;
			j = 0; 
		}
	}
		
	for (int i = 0; i < (int)v.size(); ++i){
		cout << "Pattern found at index: " << v[i] << endl;
		}
}
