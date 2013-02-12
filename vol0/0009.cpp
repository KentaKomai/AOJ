#include <iostream>

#define N 1000000

using namespace std;

int main() {
	bool prime[N];
	prime[0] = prime[1] = false;

	//initialize
	for(int i=2; i<N; i++) prime[i] = true;
	//Sieve of Eratosthenes
	for(int i=2; i<=N/2; i++){
		if(prime[i]){
			for(int j=2; i*j<=N; j++)
			{
				prime[i*j] = false;
			}
		}
	}

	int countPrime[N];
	int cnt = 0;
	for(int i=0; i<N; i++){
		if(prime[i]){
			cnt++;
		}
		countPrime[i] = cnt;
	}

	int input;
	while(true) {
		cin>>input;
		if(cin.eof()){break;}
		cout<<countPrime[input]<<endl;
	}
	return 0;
}
