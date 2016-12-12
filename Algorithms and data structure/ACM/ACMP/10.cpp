#include <iostream>

#define ll long long

using namespace std;

int main(){
	
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	for(int i=-100; i<=100; i++) if((ll)a*i*i*i + (ll)b*i*i + (ll)c*i + d == 0) cout<<i<<" ";
	return 0;
}