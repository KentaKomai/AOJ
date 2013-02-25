#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main() {
	int c1,c2,c3,my, count=0;
	map<int, bool> card;
	while(cin>>c1>>c2>>c3){
		for(int i=1; i<=10; i++) card[i] = false;
		card[c1] = true;
		card[c2] = true;
		card[c3] = true;
		my = c1 + c2;
		for(int i=1; i<=10; i++){
			if(card[i] == false){
				if(my+i <= 20){
					count++;
				}
			}
		}
		if(count>=4){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		count = 0;
	}
	return 0;
}
