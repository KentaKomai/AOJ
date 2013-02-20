#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int ans = 0, buf1=0, buf10=0, buf50=0, buf100=0;
	bool a=false, b=false, c= false, d=false;
	while(cin>>str){
		ans = 0;
		if(cin.eof()) break;
		for(int i=0; i<str.size(); i++){
			switch(str.at(i)){
				case 'I':
					buf1 += 1;
					break;
				case 'V':
					buf1 == 0 ? ans += 5 : ans += 5-buf1;
					buf1 = 0;
					break;
				case 'X':
					buf1 == 0 ? buf10 += 10 : ans += 10-buf1;
					buf1 = 0;
					break;
				case 'L':
					buf10 == 0 ? ans  += 50 : ans += 50-buf10;
					buf10 = 0;
					break;
				case 'C':
					buf10 == 0 ? buf100 += 100 : ans += 100-buf10;
					buf10 = 0;
					break;
				case 'D':
					buf100 == 0 ? ans += 500 : ans += 500-buf100;
					buf100 = 0;
					break;
				case 'M':
					buf100 == 0 ? ans += 1000 : ans += 1000-buf100;
					buf100 = 0;
					break;
			}
		}
		ans += (buf1+buf10+buf100);
		buf1 = buf10 = buf100 = 0;
		cout<<ans<<endl;
	}
	return 0;
}
