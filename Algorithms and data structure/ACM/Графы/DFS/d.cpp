#include <iostream>
#include <vector>
#define pb push_back

using namespace std;

bool check;
bool used[110];
int st[110];
vector<int> v[110];

int n, m, p, q;

void dfs(int ver, int pr){
	used[ver] = true;
	// st[ver] = 1;
	if(st[pr] == 1) st[ver] = 2;
	else st[ver] = 1;

	for(int i=0; i<v[ver].size(); i++){
		int to = v[ver][i];
		if(used[to] && st[to] == st[ver]) check = true;
		if(!used[to]) dfs(to, ver);
	}
	// used[ver] = 2;
	// st[ver] = 2;
}

int main(){
	cin>>n>>m;
	for(int i=0; i<m; i++){
		cin>>p>>q;
		v[p].pb(q);
		v[q].pb(p);
	}

	for(int i=1; i<=n; i++) st[i] = 1;

	for(int i=1; i<=n; i++){
		if(!used[i]){
			dfs(i, 0);
		}
	}

	// cout<<"st"<<endl;
	// for(int i=1; i<=n; i++){
	// 	cout<<st[i]<<" ";
	// }
	// cout<<endl;
	// cout<<"CHECK"<<check<<endl;
	if(!check){
		cout<<"YES"<<endl;
		for(int i=1; i<=n; i++){
			if(st[i] == 1) cout<<i<<" ";
		}
	}
	else cout<<"NO";
	// for(int i=1; i<=n; i++) cout<<used[i]<<" ";
	// cout<<endl;	
	// cout<<check;
	return 0;
}