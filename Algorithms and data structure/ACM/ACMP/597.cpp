#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double r1, r2, r3;
	cin>>r1>>r2>>r3;
	double a1, a2, a3;
	a1 = M_PI * r1 * r1;
	a2 = M_PI * r2 * r2;
	a3 = M_PI * r3 * r3;

	if(a2+a3<a1){
		cout<<"YES";
	}

	else cout<<"NO";


	return 0;
}