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


bool used[100100], cycle = false;
vector<int> v[100100];
vector<int> s;
int n,m,p,k;
int colors[100100];

void dfs(int t){
	used[t] = true;
	colors[t] = 1;
	for(int i = 0; i<v[t].size(); i++){
		int to = v[t][i];
		if(colors[to] == 1){
			cycle = true;
		}
		if(!used[to]){
			used[to] = true;
			dfs(to);
		}
	}
	colors[t] = 2;
	s.push_back(t);
}

int main(){

	freopen("topsort.in", "r", stdin);
	freopen("topsort.out", "w", stdout);

	cin>>n>>m;

	for(int i=1; i<=m; i++){
		cin>>p>>k;
		v[p].push_back(k);
	}



	for(int i=1; i<=n; i++){
		if(!used[i]){
			dfs(i);
		}
	}

	if(cycle){
		cout<<-1;
		return 0;
	}

	for(int i=s.size()-1; i>=0; i--){
		cout<<s[i]<<" ";
	}

	return 0;
}