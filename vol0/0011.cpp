#include <iostream>

using namespace std;

int main() {
	int a, b, v, h, tmp;
	char x;
	cin>>v;
	cin>>h;

	int num[v];
	//initialize array
	for(int i=0; i<v; i++){ num[i] = i+1; }
	
	for(int i=0; i<h; i++){
		cin>>a>>x>>b;
		swap(num[a-1], num[b-1]);
	}
	for(int i=0; i<v; i++) cout<<num[i]<<endl;
	return 0;
}
