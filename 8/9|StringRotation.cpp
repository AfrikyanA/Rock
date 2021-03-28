#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::find;


long Hash(const string& inputString){
	
	long hashed = 0;
	
	for(int i = 0; i < (int)inputString.length(); ++i)	
		hashed += inputString[i] * 3;
		
	return hashed;
}

bool IsSubString( const string& s1, const string& s2 ){
	
	if( Hash(s1) != Hash(s2) ) return false;
	
	string tmp = (s1 + s1);
	return (tmp.find(s2) != std::string::npos);
	
}
