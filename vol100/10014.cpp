#include <cstdio>
using namespace std;
int main(){
	int h,w;
	int flagR = 1;
	int flagC = 1;
	while(true) {
		scanf("%d %d", &h, &w);
		if(h==0 && w==0){ break; }
		flagR = 1;
		for(int i=0; i<h; i++){
			flagC = flagR;
			for(int j=0; j<w; j++){
				flagR ? printf("#") : printf(".");
				flagR = 1 - flagR;
			}
			flagR = 1 - flagC;
			printf("\n");
		}
	}
	return 0;
}
