
#include <map>
#include <string>
using namespace std;

#define CARD1 4
#define CARD2 13

int main() {
	int s,n;
	char c;
	int card[CARD1][CARD2];
	//array card initialize
	for(int i=0; i<CARD1; i++){
		for(int j=0; j<CARD2; j++){
			card[i][j] = 0;
		}
	}
	cin>>s;
	for(int i=0; i<s; i++){
		cin>>c>>n;
		switch(c){
			case 'S':
				card[0][n-1] = 1;
				break;
			case 'H':
				card[1][n-1] = 1;
				break;
			case 'C':
				card[2][n-1] = 1;
				break;
			case 'D':
				card[3][n-1] = 1;
				break;
		}
	}
	for(int i=0; i<CARD1; i++){
		for(int j=0; j<CARD2; j++){
			if(card[i][j] == 0){
				if(i==0){ cout<<"S "<<j+1<<endl; }
				else if(i==1){ cout<<"H "<<j+1<<endl; }
				else if(i==2){ cout<<"C "<<j+1<<endl; }
				else if(i==3){ cout<<"D "<<j+1<<endl; }
			}
		}
	}
	return 0;
}
