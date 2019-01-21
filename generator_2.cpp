#include <iostream>
#include <cmath>
using namespace std;

int main () {
	cout << "light_source{<0,0,0>color rgb<2,2,2>}" << endl;
	int n = 119613;
	double x, y, z, m;
	for(int i=0;i<n;i++){
		cin >> x >> y >> z >> m;
		//if(m>3) continue;
		cout << "object{sphere{<";
		cout << -x << ',' << y << ',' << z << ">,";
		//cout << 0.004*sqrt((exp(-m/1.7)));
		double a = sqrt((exp(-m/1.7)));
		//cout << 0.0015;
		cout << 0.004*a;
		cout << "}texture{pigment{rgb<";
		cout << a << ',' << a << ',' << a;
		cout << ">}}}" << endl;
	}
	return 0;
}