#include <iostream>
#include <string>
#include <bitset>

bool isUnique(const std::string& s)
{
	unsigned int bits = 0u;
	
	for (int i = 0; i < s.size(); ++i){
		if (bits & 1u << s[i] - 'a')
			return false;
		else bits |= (1u << s[i] - 'a');
	}
	return true;
}