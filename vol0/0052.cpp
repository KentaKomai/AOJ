#include <iostream>

using namespace std;

int main() {
	int in;
	while(cin>>in, in != 0){
		int ans=0, buf=in;
		while(buf>=5){
			buf /= 5;
			ans += buf;
		}
		cout<<ans<<endl;
	}
	return 0;
}
