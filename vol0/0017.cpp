#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {

	string crypted;
	string encrypted;
	
	int len = 0;
	
	while(getline(cin, crypted)){
		len = crypted.size();
		for(int j=0; j<26; j++){
			for(int i=0; i<len; i++){
				if(crypted[i] >= 'a' && crypted[i] <= 'z'){
					crypted[i] =  (crypted[i] - 97 + 1) % 26 + 97;
				}
			}
			if(crypted.find("the", 0) != string::npos || 
					crypted.find("this", 0) != string::npos || 
					crypted.find("that", 0) != string::npos)
			{
				cout << crypted << endl;
			}
		}
	}

	return 0;
}
