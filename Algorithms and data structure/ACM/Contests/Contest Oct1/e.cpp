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

const int MAXN = 20200;
vector<int> g[MAXN];
bool used[MAXN];
int timer, tin[MAXN], fup[MAXN];
int n,m,p,k,c = 0; 
vector <pair<int,int> > bridge;


void dfs (int v, int p = -1) {
	used[v] = true;
	tin[v] = fup[v] = timer++;
	for (size_t i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (to == p)  continue;
		if (used[to])
			fup[v] = min (fup[v], tin[to]);
		else {
			dfs (to, v);
			fup[v] = min (fup[v], fup[to]);
			if (fup[to] > tin[v])
				c++;
				bridge.push_back(make_pair(to,v));
		}
	}
}
 
void find_bridges() {
	timer = 0;
	for (int i=0; i<n; ++i)
		used[i] = false;
	for (int i=0; i<n; ++i)
		if (!used[i])
			dfs (i);
}


int main(){

	freopen("inevit.in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	cin>>n>>m;

	for(int i=0; i<m; i++){
		cin>>p>>k;
		g[p].push_back(k);
		g[k].push_back(p);
	}

	find_bridges();
	cout<<c<<endl;
	for(int i=0; i<bridge.size(); i++){
		cout<<bridge[i].first<<" "<<bridge[i].second;
		cout<<endl;
	}

	return 0;
}