#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){
	int score, number;
	map<int, int> data;
	map<int, int> rank;
	map<int, int> group;
	map<int, int>::iterator itr0;
	map<int, int>::iterator itr1;

	int user_input;

	while(scanf("%d,%d", &number, &score), number+score){
		data.insert( make_pair(number, score) );
		rank.insert( make_pair(number, 1) );

		if( group.find(score) != group.end() ) group[score] += 1;
		else group.insert( make_pair(score, 1) );
	}

	for (itr0 = data.begin(); itr0 != data.end(); itr0++){
		for(itr1 = group.begin(); itr1 != group.end(); itr1++){
			if(itr0->second < itr1->first) rank[itr0->first] += 1;
		}
	}

	while(cin>>user_input, !cin.eof() || user_input==0){
		cout<<rank[user_input]<<endl;
	}

	return 0;
}
