#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main(){
	int n, m;
	while(true){
		scanf("%d %d", &n, &m);
		if(n==0 && m==0){
			break;
		}

		//initialize map
		map<int, int> member;
		for(int i=1; i<=n; i++){
			member[i] = 0;
		}

		int number = 0;
		int check = 0;
		for(int i=1; ; i++){
			if(i > n){
				i = i - n;
			}
			if(member[i] == 0){
				check++;
				if(check == m){
					member[i] = ++number; check=0;
					// cout<<"index:"<<i<<" number:"<<+number<<endl; //debug
				}
			}
			if(number == n){
				break;
			}
		}

		for(int i=1; i<=n; i++){
			if(member[i] == n){
				printf("%d\n", i);
			}
		}
	}
	return 0;
}