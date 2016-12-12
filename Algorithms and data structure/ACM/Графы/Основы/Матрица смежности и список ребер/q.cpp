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

vector<int> v;
int a[120][120];
int n,m,p,k,c = 0;

int main(){

	// freopen("q.in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;

	for(int i=1; i<=m; i++){
		cin>>p>>k;
		a[p][k] = 1;
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j] == 1){
				c++;
			}
		}
		v.push_back(c);
		c = 0;
	}

	for(int i=0; i<v.size()-1; i++){
		if(v[i] != v[i+1]){
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES";
	return 0;
}