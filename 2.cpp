#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int div(int n){					// amenapoqr bajanararna gtnum
  for(int i = 2; i<=n; ++i){
    if (n%i == 0) return i; 
  }
	return n; 
}

int findDiv(int number, int number1){
	
	if(number == 0 || number1 == 0) return -1;
    
    vector<int> first;
    vector<int> second;

    for(int i = number; i > 1; i/=div(i)){
        first.push_back(div(i));			 	// gtnuma araji tvi amenapoqr bajanarar@
      }											//  u mcnuma araji vectori mej
    for(int i = number1; i > 1; i/=div(i)){
        second.push_back(div(i));				// nuyn@ erkrord tvi het
      }

    int minSize = second.size();
    if((int)first.size() <= minSize)		// poqr chapov vector@ vekaluma
        minSize = first.size();				// vor heto dra chapov For sarqi 

    int naibolshiyDelitel = 1;
    for(int i = 0; i < minSize; ++i){
        if( first[i] == second[i] ){
          naibolshiyDelitel *= first[i];	//  erkusi opshi amenapoqr bajanararner
        }									// bazmapatkelov gtnuma @ndhanur amenamec@
    }

    return naibolshiyDelitel;
}

