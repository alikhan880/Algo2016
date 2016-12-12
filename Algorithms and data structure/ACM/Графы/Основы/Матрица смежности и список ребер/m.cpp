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
int n,m,k,p;
int c = 0;

int main(){

	// freopen("m.in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n>>m;

	for(int i=1; i<=m; i++){
		cin>>k>>p;
		a[k][p] = 1;
		a[p][k] = 1;
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j] == 1){
				c++;
			}
		}
		cout<<c<<endl;
		c = 0;
	}

	return 0;
}