#include <cstdio>

using namespace std;

int main() {
	int side[3];
	int iso=0, cho=0;
	while(scanf("%d,%d,%d",&side[0],&side[1],&side[2]) != EOF){
		if(side[0]==side[1]) iso++;
		else if( (side[0]*side[0]) + (side[1]*side[1]) == (side[2]*side[2]) ) cho++;
	}
	printf("%d\n", cho);
	printf("%d\n", iso);
	return 0;
}
