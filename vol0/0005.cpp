#include <iostream>
#include <cmath>

using namespace std;

int getGcd(int x, int y){
	int r;
	while( (r=x%y) != 0 ){
		x=y;
		y=r;
	}
	return y;
}

int main() {
	long long a,b, gcd, lcm;
	while(cin>>a>>b){
		if(a==0 || b==0){ break; }
		gcd = getGcd(a,b);
		lcm = (a*b) / gcd;
		cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}


