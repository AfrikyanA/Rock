#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool oneAway(string const& inputString1, string const& inputString2){

    int size1 = inputString1.length();
	int size2 = inputString2.length();
	
	if(abs(size1-size2) > 1)
		return false;
	
	int count = 0;
	
	int i = 0, j = 0;
	
	while (i < size1 && j < size2){
		
		if (inputString1[i] != inputString2[j])
		{
			if(count == 1){
				return false;
			}
			
			if (size1 > size2)
				++i;
			
			else if (size1 < size2)
				++j;
			
			else{
				++i;
				++j;
			}
		
			++count;
		} // if
		else{ // if ==
			++i;
		    ++j;
		}
	} // while
	
	if(i < size1 || j < size2)
		++count;
	
	return (count == 1);
}
