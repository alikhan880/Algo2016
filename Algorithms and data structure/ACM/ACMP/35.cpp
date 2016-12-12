#include <iostream>
#include <vector>
#define ll long long
#define pb push_back
using namespace std;

int k, n, m;
vector<ll> v;
int main(){

	cin>>k;

	for(int i=0; i<k; i++){
		cin>>n>>m;
		ll d = (ll)(19*m) + (ll)((n+239)*(n+366)/2);
		v.pb(d);
	}

	for(int i=0; i<v.size(); i++) cout<<v[i]<<endl;


	return 0;
}