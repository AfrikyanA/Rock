#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


bool isUniq (string const&  inputString) {
	
		sort(inputString.begin(), inputString.end());
		
		for(int i = 0; i < inputString.length()-1; ++i){
			if(inputString[i] == inputString[i+1])
				return false;
		}
return true;
}

