#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

#define XAXIS 10
#define YAXIS 10

int main(){
	int paper[XAXIS][YAXIS];
	int x,y,s;
	int white = 0, most=0;

	for(int i=0; i<XAXIS; i++)
	for(int j=0; j<YAXIS; j++)
		paper[i][j] = 0;

	while(scanf("%d,%d,%d", &x, &y, &s) != EOF){
		switch(s){
			case 3:
				if(x+2 <  XAXIS) paper[x+2][y] += 1;
				if(y+2 <  YAXIS) paper[x][y+2] += 1;
				if(x-2 >= 0)     paper[x-2][y] += 1;
				if(y-2 >= 0)     paper[x][y-2] += 1;

			case 2:
				if(x+1 <  XAXIS && y+1 < YAXIS )  paper[x+1][y+1] += 1;
				if(x+1 <  XAXIS && y-1 >= 0)       paper[x+1][y-1] += 1;
				if(x-1 >= 0     && y+1 < YAXIS )  paper[x-1][y+1] += 1;
				if(x-1 >= 0     && y-1 >= 0)       paper[x-1][y-1] += 1;

			case 1:
				if(x+1 <  XAXIS) paper[x+1][y] += 1;
				if(y+1 <  YAXIS) paper[x][y+1] += 1;
				if(x-1 >= 0)     paper[x-1][y] += 1;
				if(y-1 >= 0)     paper[x][y-1] += 1;
				paper[x][y] += 1;
				break;
		}
	}

	for(int i=0; i<XAXIS; i++)
	for(int j=0; j<YAXIS; j++){
		if(paper[i][j] == 0 )  white++;
		most = max(most,paper[i][j]);
	}

	cout<<white<<endl<<most<<endl;
	return 0;
}
