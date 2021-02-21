#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


long hashString(const string* const s){
	
		long hashed = 0;
		for(int i = 0; i < (int)s->length(); ++i) {
			hashed += (*s)[i] * 3; 
			}
		return hashed;
}
	
bool isPerm(const string* const str, const string* const str1) {
		
		if(str->length() != str1->length())
			return false;
		return hashString(str) == hashString(str1);
	
}
