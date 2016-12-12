#include <iostream>

#define ll long long

using namespace std;

int const banka = 16;

int main(){

	ll l, w, h;
	cin>>l>>w>>h;

	ll res = (ll)(2*l*h + 2*w*h);
	if(res%banka == 0) cout<<res/banka;
	else cout<<res/banka + 1;

	return 0;
}