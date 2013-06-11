#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string in, out;
	bool flg = false;
	getline(cin, in);

	replace(in.begin(), in.end(), ',', ' ');
	replace(in.begin(), in.end(), '.', ' ');
	
	for(int i=0; i<in.size(); i++){
		if(in[i] == ' ' || in[i] == '\n'){
			if(out.size() > 2 && out.size() < 7){
				if(flg){ cout<<" "; }
				cout<<out;
				flg = true;
			}
			out = "";
		}else{
			out += in[i];
		}
	}
	cout<<endl;
	return 0;
}
