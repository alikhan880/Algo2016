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
vector <int> v[120];
bool used[120];
int n,s;
int c = 0;
int dfs(int s){
	used[s] = true;
	for(int i=0; i<v[s].size(); i++){
		if(!used[v[s][i]]){
			dfs(v[s][i]);
			c++;
		}
	}

	return c;
}

int main(){

	cin>>n>>s;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j]==1){
				v[i].push_back(j);
				// v[j].push_back(i);
			}
		}
	}
	cout<<dfs(s)+1;
	return 0;
}