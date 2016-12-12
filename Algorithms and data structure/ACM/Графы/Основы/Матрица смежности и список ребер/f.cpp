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
int n, m, k, p;

int main(){

	// freopen("f.in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;

	for(int i=1; i<=m; i++){
		cin>>k>>p;
		a[k][p] = 1;
		a[p][k] = 1;
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}