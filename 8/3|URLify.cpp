#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	
	string inputString;
	cout << "Enter string: ";
	getline(cin,inputString);
	
	vector<char> oString;
	
	for(int i = 0; i < (int)inputString.length(); ++i){
		
		if (inputString[i] != ' '){
			oString.push_back(inputString[i]);
			
		}
		else {
			oString.push_back('%');
			oString.push_back('2');
			oString.push_back('0');
			}
	
	}	
}
