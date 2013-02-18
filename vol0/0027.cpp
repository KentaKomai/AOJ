#include <iostream>
#include <vector>
#include <string>

#define YEAR 2004

using namespace std;

int main() {
	vector<string> week;
	week.push_back("Monday");
	week.push_back("Tuesday");
	week.push_back("Wednesday");
	week.push_back("Thursday");
	week.push_back("Friday");
	week.push_back("Saturday");
	week.push_back("Sunday");
	int m,d,w;
	while(cin>>m>>d){
		if(m==0 || d==0){ break; }
		w = (YEAR + YEAR/4 - YEAR/100 + YEAR/400 + (13*m+8)/5 + d) % 7;
		cout<<week[w]<<endl;
	}
	return 0;
}
