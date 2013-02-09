#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int t[3];
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>t[0]>>t[1]>>t[2];
		sort(t, t+3);
		if( ( (t[0]*t[0]) + (t[1]*t[1])) == (t[2]*t[2]) ){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
