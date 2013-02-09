#include <stdio.h>

int main(){
	int num, i;
	for(i=1; ;i++){
		scanf("%d", &num);
		if(num==0) break;
		printf("Case %d: %d\n", i, num);
	}
	return 0;
}
