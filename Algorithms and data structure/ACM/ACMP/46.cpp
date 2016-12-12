#include <iostream>
#include <iomanip>
using namespace std;

const double e = 2.7182818284590452353602875;
int main(){
	int n;
	cin>>n;
	if(n<=15) cout<<fixed<<setprecision(n)<<e;
	else if(n==16) cout<<"2.7182818284590452";
	else if(n==17) cout<<"2.71828182845904524";
	else if(n==18) cout<<"2.718281828459045235";
	else if(n==19) cout<<"2.7182818284590452354";
	else if(n==20) cout<<"2.71828182845904523536";
	else if(n==21) cout<<"2.718281828459045235360";
	else if(n==22) cout<<"2.7182818284590452353603";
	else if(n==23) cout<<"2.71828182845904523536029";
	else if(n==24) cout<<"2.718281828459045235360288";
	else if(n==25) cout<<"2.7182818284590452353602875";
	// cout<<e;
	return 0;
}