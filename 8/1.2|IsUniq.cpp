#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const int MAX_CHAR = 256;

bool isUniq (string const&  inputString) {
	
		int size = inputString.length();
		if(MAX_CHAR < size){
			return false;
		}
		
		bool chars[MAX_CHAR] {0};
		
		for(int i = 0; i < size; ++i){
			if(chars[(inputString[i])] == true){
				return false;
			}
			
			chars[(inputString[i])] = true;
		}
return true;
}

