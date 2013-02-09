#include <iostream>
using namespace std;
int main() {
	double r;
	double tt = 3.1415926535897;
	cin>>r;
	cout.precision(6);
	cout<<fixed<<( (r*r)*tt )<<" "<<fixed<<( (2*r)*tt )<<endl;
	return 0;
}
