#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> weights;
	vector<int> use;
	weights.push_back(1);
	weights.push_back(2);
	weights.push_back(4);
	weights.push_back(8);
	weights.push_back(16);
	weights.push_back(32);
	weights.push_back(64);
	weights.push_back(128);
	weights.push_back(256);
	weights.push_back(512);
	int w;

	while(cin>>w,!cin.eof()) {
		while(w!=0){
			for(int i=0; i<weights.size(); i++){
				if(w == 0) break;
				if(w >= 512 ){
					w -= 512;
					use.push_back(512);
				}
				else if(weights.at(i) > w){
					w -= weights.at(i-1);
					use.push_back(weights.at(i-1));
					break;
				}
			}
		}
		sort(use.begin(), use.end());
		for(int i=0; i<use.size()-1; i++){
			cout<<use[i]<<" ";
		}
		cout<<use[use.size()-1]<<endl;
		use.clear();
	}
	return 0;
}
