#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> num;
	int n;
	for(int i=0; i<5; i++)cin>>n,num.push_back(n);
	sort(num.rbegin(), num.rend());
	for(int i=0; i<4; i++){
		cout<<num[i]<<" ";
	}

	cout<<num[4]<<endl;

	return 0;
}
