#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int num[2];
	while(true){
		cin>>num[0]>>num[1];
		if(num[0]==0 && num[1]==0) break;
		if(num[0]>num[1]){
			cout<<num[1]<<" "<<num[0]<<endl;
		}else{
			cout<<num[0]<<" "<<num[1]<<endl;
		}
	}
	return 0;
}
