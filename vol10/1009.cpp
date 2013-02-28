#include <iostream>
#include <algorithm>

using namespace std;
int euclid(int a, int b){
	int l = max(a, b);
	int r = min(a, b);
	int buf;
	if(a==0 || b==0) return 0;

	while(r!=0){
		buf = r;
		r = l%r;
		l = buf;
	}
	return l;
}
int main(){
	int a,b,ret;
	while(cin>>a>>b, !cin.eof()){
		ret = 0;
		cout<<euclid(a,b)<<endl;
	}
}
