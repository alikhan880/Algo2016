#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

int a[120][120];
int n,m,p,k;

int main(){

	// freopen("r.in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;

	for(int i=1; i<=m; i++){
		cin>>p>>k;
		a[p][k] = 1;
		a[k][p] = 1;
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i!=j && a[i][j] != 1){
				cout<<"NO";
				return 0;
			}
		}
	}

	cout<<"YES";
	return 0;
}