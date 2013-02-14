#include <iostream>
#include <map>

using namespace std;

int main() {
	map<int, int> cntMap;
	map<int, int>::iterator it;
	int in, buf;
	while(cin>>in){
		if(cntMap.count(in) == 0){ cntMap.insert(make_pair(in, 0)); }
		else{ cntMap.find(in)->second++; }
	}

	int maxCnt = 0;
	for(it=cntMap.begin(); it!=cntMap.end(); it++){
		maxCnt = max(maxCnt, it->second);
	}
	for(it=cntMap.begin(); it!=cntMap.end(); it++){
		if(maxCnt == it->second){
			cout<<it->first<<endl;
		}
	}
	return 0;
}
