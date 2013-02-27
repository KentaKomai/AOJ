#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> ans;
	int a;
	float b,c;
	while(scanf("%d,%f,%f",&a,&b,&c) != EOF){
		if((b/(c*c)) >= 25){
			ans.push_back(a);
		}
	}
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
