#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	float f = (float)a/(float)b;
	cout<<a/b<<" "<<a%b<<" ";
	cout.precision(5);
	cout<<fixed<<f<<endl;
	return 0;
}
