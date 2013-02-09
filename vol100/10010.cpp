#include <iostream>
using namespace std;
int main() {
	int a,b,ans;
	char c;
	while(true){
		cin>>a>>c>>b;
		if(c=='?'){return 0;}
		switch(c){
			case '+':
				ans = a+b;
				break;
			case '-':
				ans = a-b;
				break;
			case '*':
				ans = a*b;
				break;
			case '/':
				ans = a/b;
				break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
