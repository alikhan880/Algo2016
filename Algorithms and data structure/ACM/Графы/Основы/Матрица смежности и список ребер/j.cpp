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

	// freopen("j.in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n>>m;

	for(int i = 1; i<=m; i++){
		cin>>k>>p;

		if(a[k][p] != 1){
			a[k][p] = 1;
			a[p][k] = 1;
		}

		else{
			cout<<"YES";
			return 0;
		}
	}

	cout<<"NO";

	return 0;
}