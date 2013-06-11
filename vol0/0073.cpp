#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){

	double x, h;

	while(cin>>x>>h, x+h){
		double c = sqrt( ( (x/2)*(x/2) ) + (h*h) );
		printf("%.6f\n", ( x*x + 2*c*x ) );
	}
	return 0;
}
