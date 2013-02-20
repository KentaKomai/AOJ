#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cfloat>

using namespace std;

int main() {
	double height = 0, maxNum=0.0, minNum=DBL_MAX;
	while(cin>>height){
		if(cin.eof()) break;
		maxNum = max(maxNum, height);
		minNum = min(minNum, height);
	}
	printf("%.1f\n", maxNum-minNum);
	return 0;

}
