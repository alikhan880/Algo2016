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

map<int,int> ma;
int n,m,k,p;

int main(){

	freopen("right.in", "r", stdin);
	freopen("right.out", "w", stdout);
	scanf("%d", &n);
	scanf("%d", &m);

	for(int i=1; i<=n; i++){
		// cin>>p;
		scanf("%d", &p);
		ma[p] = i;
	}

	for(int i=0; i<m; i++){
		// cin>>k;
		scanf("%d", &k);
		cout<<ma[k]<<endl;
	}

	

	return 0;
}