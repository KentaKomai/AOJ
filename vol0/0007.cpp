#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int money=100, week;
	cin>>week;
	for(int i=0; i<week; i++) {
		money = ceil(money*1.05);
	}
	cout<<(money*1000)<<endl;
	return 0;
}
