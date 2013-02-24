#include <iostream>

using namespace std;

int main() {
	int in;
	while(cin>>in, !cin.eof()){
		cout<<(in*(in+1)/2+1)<<endl;
	}
	return 0;
}
