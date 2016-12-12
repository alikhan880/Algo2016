#include <iostream>
#include <vector>

#define pb push_back
#define mp make_pair
using namespace std;


vector<pair<int, vector<int> > > rs;
vector<int> v[100100], comp;
int n,m,p,q;
bool used[100100];


void dfs(int p){
	used[p] = true;
	comp.push_back(p);
	for(int i=0; i<v[p].size(); i++){
		if(!used[v[p][i]]) dfs(v[p][i]);
	}
}


int main(){

	cin>>n>>m;

	for(int i=0; i<m; i++){
		cin>>p>>q;
		v[p].pb(q);
		v[q].pb(p);
	}

	for(int i=1; i<=n; i++){
		comp.clear();
		if(!used[i]) dfs(i);
		if(comp.size() > 0)	rs.pb(mp(comp.size(), comp));
	}


	cout<<rs.size()<<endl;
	for(int i=0; i<rs.size(); i++){
		cout<<rs[i].first<<endl;
		for(int j=0; j<rs[i].second.size(); j++){
			cout<<rs[i].second[j]<<" ";
		}
		cout<<endl;	
	}


	return 0;
}