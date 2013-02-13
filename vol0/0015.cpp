#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	string str1, str2, of="overflow";
	for(int i=0; i<n; i++){
		cin>>str1>>str2;
		int size1=str1.size();
		int size2=str2.size();

		if(size1 > 80 || size2 > 80){
			cout<<of<<endl;
		}
		else{
			int num1[80] = {0}, num2[80] = {0}, buf[81] = {0};

			for(int i=0; i<size1; i++){ num1[size1-1-i] = (str1[i]-'0'); }
			for(int i=0; i<size2; i++){ num2[size2-1-i] = (str2[i]-'0'); }
			for(int i=0; i<80; i++){ buf[i] = num1[i]+num2[i]; }
			for(int i=0; i<80; i++){
				if(buf[i] > 9){
					buf[i+1] += buf[i]/10;
					buf[i] = buf[i]%10;
				}
			}
			if(buf[80] != 0) cout<<of<<endl;
			else{
				int flag = 79;
				while(buf[flag] == 0 && flag != 0){ flag--; }

				for(int i=flag; i>=0; i--){
					cout<<buf[i];
				}
				cout<<endl;
			}

		}
	}
	return 0;
}
