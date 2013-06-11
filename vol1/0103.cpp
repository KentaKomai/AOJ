#include <iostream>
#include <string>

using namespace std;

int main(){
	int ening;
	cin>>ening;
	while(ening != 0){
		string result;
		int runner = 0;
		int score = 0;
		int out = 0;
		while(cin>>result){
			if(result == "HIT"){
					runner++;
					if(runner == 4){
						score+=1;
						runner=3;
					}
			}
			else if(result ==  "OUT"){
					out++;
			}
			else if(result == "HOMERUN"){
					score += runner + 1;
					runner = 0;
			}
			if(out == 3){
				break;
			}
		}
		cout<<score<<endl;
		ening -= 1;
	}
	return 0;
}