#include <cstdio>

using namespace std;

int main() {
	int ans;
	int station = 10;
	int dis[station];
	int speed[2];
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", 
				dis, dis+1, dis+2, dis+3, dis+4, dis+5,
				dis+6, dis+7, dis+8, dis+9, speed, speed+1) != EOF ){
		for(int i=1; i<station; i++) dis[i] += dis[i-1];
		double min = dis[station-1]/(speed[0]+speed[1]);
		int sum = 0;
		while(min*speed[0] > sum){
			sum += dis[ans];
			ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
