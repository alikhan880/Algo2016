#include <iostream>

#define ll long long

using namespace std;

int n,t;
ll a[110];

ll calculate(ll num){
	ll sum = num*(num+1)/2;
	// cout<<sum;

	ll p = 1;
	while(p<=num){
		sum-=p*2;
		p*=2;
	}

	return sum;
}

int main(){
	cin>>t;
	for(int i=0; i<t; i++) scanf("%ld", &a[i]);

	for(int i=0; i<t; i++) cout<<calculate(a[i])<<endl;

	return 0;
}