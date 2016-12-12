#include <iostream>

using namespace std;

int main(){


	int n, ans = 0;
	cin>>n;
	if(n>0){
		for(int i=1; i<=n; i++){
			ans += i;
		}
	}
	else{
		for(int i=1; i>=n; i--){
			ans += i;
		}
	}

	cout<<ans;

	return 0;
}