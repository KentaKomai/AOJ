#include <iostream>
#include <string>

using namespace std;

int main() {
	string row;
	string ans;
	while(cin>>row, !cin.eof()){
		int i=0;
		ans = "";
		while(row[i] != NULL){
			if(row[i] == '@'){
				int count = (int)row[i+1] - '0';
				for(int j=0; j<count; j++){
					ans += row[i+2];
				}
				i += 3;
			}else{
				ans += row[i];
				i++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
