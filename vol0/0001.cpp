#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int h[10],tmp;
	for(int i=0; i<10; i++) cin>>h[i];
	sort(h, h+10, greater<int>());
	for(int i=0; i<3; i++) cout<<h[i]<<endl;
	return 0;
}
