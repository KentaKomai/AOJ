#include <iostream>

using namespace std;

/* 結局エラーのまま、自分で解けてない問題 */

int main(){
	int y, m, d;
	while(cin>>y>>m>>d){
		if(y>1989){
			cout<<"heisei "<<y-1988;
		}else if(y == 1989){
			if(m > 1){
				cout<<"heisei 1";
			}else if(d > 7){
				cout<<"heisei 1";
			}else{
				cout<<"showa 64";
			}
		}else if(y > 1926){
			cout<<"showa "<<y-1925;
		}else if(y == 1925){
			if(m==12 && d>24){
				cout<<"showa 1";
			}else{
				cout<<"taisho 15";
			}
		}else if(y > 1912){
			cout<<"taisho "<<y-1911;
		}else if(y == 1912){
			if(m>7){
				cout<<"taisho 1";
			}else if(m==7 && d>29){
				cout<<"taisho 1";
			}else{
				cout<<"meiji 45";
			}
		}else if(y > 1868){
			cout<<"meiji "<<y-1867;
		}else if(y == 1868){
			if(m>9){
				cout<<"meiji 1";
			}else if(m==9 && d>7){
				cout<<"meiji 1";
			}else{
				cout<<"pre-meiji"<<endl;
				continue;
			}
		}else{
			cout<<"pre-meiji"<<endl;
			continue;
		}
		cout<<" "<<m<<" "<<d<<endl;
	}
	return 0;
}