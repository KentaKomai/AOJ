#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	long long int ans=1;
	cin>>n;
	for(int i=n; i>0; i--){
		ans *= i;
	}
	cout<<ans<<endl;
	return 0;
}
