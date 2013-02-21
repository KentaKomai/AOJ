#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int cup[3] = {1,0,0};
	string str;
	while(cin>>str, !cin.eof()){
		swap(cup[str[0]-'A'], cup[str[2]-'A']);
	}
	for(int i=0; i<3; i++){
		if(cup[i] == 1) cout<<(char)('A'+ i )<<endl;
	}

	return 0;
}
