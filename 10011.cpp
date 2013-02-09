#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int roop,i,j, x[100];
	scanf("%d", &roop);
	for(i=0; i<roop; i++) {
		scanf("%d", &x[i]);
	}
	for(j=roop-1; j>0; j--){
		printf("%d ", x[j]);
	}
	printf("%d\n", x[0]);
	return 0;
}
