#include <iostream>
#include <string>
#include <algorithm>
char ToUpper (char cX) { return toupper(cX); } 
using namespace std;

int main() {
	string in;
	getline(cin, in);
	transform(in.begin(), in.end(), in.begin(), ToUpper);
	cout<<in<<endl;
	return 0;
}
