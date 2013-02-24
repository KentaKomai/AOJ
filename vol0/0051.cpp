#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <cmath>
#include <functional>
#include <limits>

#define INT32_MAX (2147483647)

using namespace std;

int main() {
	string row;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int minNum=INT32_MAX, maxNum=0, buf;
		cin>>row;
		sort(row.begin(), row.end(), greater<char>());
		istringstream istr1(row);
		istr1>>buf;
		maxNum = max(maxNum, buf);
		sort(row.begin(), row.end());
		istringstream istr2(row);
		istr2>>buf;
		minNum = min(minNum, buf);
		cout<<(maxNum-minNum)<<endl;
	}
	return 0;
}
