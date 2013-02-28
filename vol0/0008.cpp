#include <iostream>

using namespace std;

int main() {
	int num;
	int a,b,c,d,cnt=0;
	while(cin>>num, !cin.eof()){
		cnt=0;
		for(a=0; a<10; a++)
			for(b=0; b<10; b++)
				for(c=0; c<10; c++)
					for(d=0; d<10; d++)
						if(a+b+c+d==num) cnt++;
		cout<<cnt<<endl;
	}
	return 0;
}
