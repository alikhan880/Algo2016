#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	double res = sqrt(pow((double)abs(x2-x1),2) + pow((double)abs(y2-y1),2));
	cout<<fixed<<(int)res;
	// cout<<
	return 0;
}