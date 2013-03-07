#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//まだ解けない

int main() {
	double x1,x2,x3;
	double y1,y2,y3;
	double xp,yp;
	double ab,bc,ca,ap,bp,cp;
	double s,s1,s2,s3;
	double spab, spbc, spca, sabc;
	string ret;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp, !cin.eof()){
		ret = "NO";

		//ab = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
		//bc = sqrt( (x3-x2)*(x3-x2) + (y3-y2)*(y3*y2) );
		//ca = sqrt( (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3) );

		//ap = sqrt( (xp-x1)*(xp-x1) + (yp-y1)*(yp-y1) );
		//bp = sqrt( (xp-x2)*(xp-x2) + (yp-y2)*(yp-y2) );
		//cp = sqrt( (xp-x3)*(xp-x3) + (yp-y3)*(yp-y3) );

		ab=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		bc=sqrt((x3-x1)*(x3-x1)+(y1-y3)*(y1-y3));
		ca=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		ap=sqrt((x1-xp)*(x1-xp)+(y1-yp)*(y1-yp));
		bp=sqrt((xp-x2)*(xp-x2)+(yp-y2)*(yp-y2));
		cp=sqrt((x3-xp)*(x3-xp)+(yp-y3)*(yp-y3));

		s1 = (ab+ap+bp)/2;
		s2 = (bc+bp+cp)/2;
		s3 = (ca+ap+cp)/2;
		s  = (ab+bc+ca)/2;

		spab = sqrt(s1*(s1-ab)*(s1-ap)*(s1-bp));
		spbc = sqrt(s2*(s2-bc)*(s2-bp)*(s2-cp));
		spca = sqrt(s3*(s3-ca)*(s3-ap)*(s3-cp));
		sabc = sqrt(s *(s -ab)*(s -bc)*(s -ca));
		cout<<"spab:"<<spab<<endl;
		cout<<"spbc:"<<spbc<<endl;
		cout<<"spca:"<<spca<<endl;
		cout<<"sabc:"<<sabc<<endl;
		
		if( spab+spbc+spca == sabc ){
			ret = "YES";
		}
		cout<<ret<<endl;
	}
	return 0;
}
