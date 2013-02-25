#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	string row, buf("");
	int a;
	char d;
	while(cin>>row, !cin.eof()){
		for(int i=row.size(); i>1; i--){
			for(int j=0; j<row.size()-1; j++){
				a = ((row.at(j) - '0') + (row.at(j+1) - '0')) % 10;
				sprintf(&d,"%d", a);
				buf += d;
			}
			row = buf;
			buf = "";
		}
		cout<<row<<endl;
	}
	return 0;
}
