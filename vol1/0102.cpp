#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num;
	while(cin>>num, !cin.eof()) {
		if(num==0) break;
		int table[num][num];
		int col_num[num];

		//initialize
		for(int i=0; i<num; i++){
			for(int j=0; j<num; j++){
				table[i][j] = 0;
			}
			col_num[i] = 0;
		}

		for(int i=0; i<num; i++){
			for(int j=0; j<num; j++){
				cin>>table[i][j];
			}
		}
		int all_sum = 0;
		for(int i=0; i<num; i++){
			int row_sum = 0;
			for(int j=0; j<num; j++){
				cout<< setw(5)<<right <<table[i][j];
				row_sum +=table[i][j];
				col_num[j] += table[i][j];
			}
			cout<< setw(5)<<right<< row_sum<<endl;
			all_sum += row_sum;
		}

		for(int i=0; i<num; i++){
			cout<< setw(5)<<right<< col_num[i];
		}
		cout<< setw(5)<<right <<all_sum<<endl;
	}
	return 0;
}
