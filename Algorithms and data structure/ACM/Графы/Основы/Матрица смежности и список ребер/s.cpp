#include <iostream>

using namespace std;

int a[110][110];

int main(){

	// freopen("s.in", "r", stdin);
	int n,m;
	cin>>n>>m;

	for(int i=0; i<m; i++){
		int p,k;
		cin>>p>>k;
		a[p][k] = 1;
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j] == 0 && a[j][i] == 0 && i!=j){
				cout<<"NO";
				return 0;
			}
		}
	}

	cout<<"YES";

	return 0;
}