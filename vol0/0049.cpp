#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main() {
	int num;
	char blood[2];
	char row[1000];
	map<string, int> type;
	while(cin>>row){
		if(cin.eof()) break;
		sscanf(row,"%d,%s", &num, &blood);
		type[blood]++;
	}
	cout<<type["A"]<<endl;
	cout<<type["B"]<<endl;
	cout<<type["AB"]<<endl;
	cout<<type["O"]<<endl;
	return 0;
}
