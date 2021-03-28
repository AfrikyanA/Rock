#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;


bool find(char, vector<char>);
bool PalPerm(const string&);

int main(){
	string str;
	cout << "Enter string: ";
	getline(cin,str);
	cout << std::boolalpha << PalPerm(str);
}



bool find(char ch, vector<char> sh){
	
	for(int i = 0; i < (int)sh.size(); ++i){
		if(ch == sh[i]) return 1;
	}
	return 0;
	}
	
bool PalPerm(const string& inputString){

	vector<char> v;
	int count = 0;
	int countE = 0;
	
	for(int i = 0; i < (int)inputString.length(); ++i){		
		
				if(inputString[i] == ' ') continue;
				if( find(inputString[i], v) ) continue;
				
		for(int j = 0; j < (int)inputString.length(); ++j){
				
				
			if (inputString[i] == inputString[j] ){
				++count; 
				v.push_back(inputString[i]);
				}	
		
		}
		if(count%2 != 0){
			++countE;
			count = 0;
		}
		count = 0;
	}
	
	if(countE < 2 ){
		return true;
		}
	return false;	
	
	
	}
