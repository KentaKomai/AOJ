#include <iostream>
#include <string>

#define LIGHT_FLY	48.00
#define FLY		 	51.00
#define BANTAM		54.00
#define FEATHER		57.00
#define LIGHT		60.00
#define LIGHT_WELTER 64.00
#define WELTER		69.00
#define LIGHT_MIDDLE 75.00
#define MIDDLE		81.00
#define LIGHT_HEAVY	91.00

using namespace std;

int main() {
	double weight;
	string strWeight;
	while(cin>>weight){
		if(cin.eof()) break;
		strWeight = "";
		if(weight <= LIGHT_FLY) strWeight = "light fly";
		else if(weight <= FLY) strWeight = "fly";
		else if(weight <= BANTAM) strWeight = "bantam";
		else if(weight <= FEATHER) strWeight = "feather";
		else if(weight <= LIGHT) strWeight = "light";
		else if(weight <= LIGHT_WELTER) strWeight = "light welter";
		else if(weight <= WELTER) strWeight = "welter";
		else if(weight <= LIGHT_MIDDLE) strWeight = "light middle";
		else if(weight <= MIDDLE) strWeight = "middle";
		else if(weight <= LIGHT_HEAVY) strWeight = "light heavy";
		else strWeight = "heavy";
		cout<<strWeight<<endl;
	}
	return 0;
}
