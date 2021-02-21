#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


bool isUniq (string const&  inputString) {
		
		int size = inputString.length();
		for(int i = 0; i < size-1; ++i)
			for(int j = i+1; j < size; ++j){
				if(inputString[i] == inputString[j])
					return false;
				}
		
			
return true;
}

