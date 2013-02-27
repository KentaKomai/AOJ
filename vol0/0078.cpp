#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int max=0;
	while(cin>>max, max!=0){
		int magic_square[max][max];
		for(int i=0; i<max; i++)
			for(int j=0; j<max; j++)
				magic_square[i][j] = 0;

		int element = 1;
		int center = (max/2)+1;
		int index_x = center-1;
		int index_y = center;
		magic_square[index_y][index_x] = element;
		++element;
		index_x += 1;
		index_y += 1;
		
		while(element <= (max*max)){
			if(index_x >= max){
				index_x = 0;
			}else if( index_x < 0){
				index_x = max-1;
			}else if( index_y >= max){
				index_y = 0;
			}else if( magic_square[index_y][index_x] != 0){
				index_x -= 1;
				index_y += 1;
			}else{
				magic_square[index_y][index_x] = element;
				++element;
				index_x += 1;
				index_y += 1;
			}
		
		}
		for(int i=0; i<max; i++){
			for(int j=0; j<max; j++){
				printf("%4d", magic_square[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
