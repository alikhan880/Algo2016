#include <iostream>
#include <vector>

#define pb push_back

using namespace std;

vector<int> v[110];
int used[110];
int n, q, cnt;
bool check;

void dfs(int ver, int p){
	used[ver] = 1;
	for(int i=0; i<v[ver].size(); i++){
		int to = v[ver][i];
		if(used[to] == 1 && to!=p) check = true;
		if(used[to] == 0) dfs(to, ver);
	}
	used[ver] = 2;
	cnt++;
}

int main(){

	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>q;
			if(q == 1){
				v[i].pb(j);
			}
		}
	}

	// for(int i=1; i<=n; i++){
	// 	for(int j=0; j<v[i].size(); j++){
	// 		cout<<v[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	dfs(1, -1);

	// cout<<"USED"<<endl;
	
	// cout<<endl;

	// cout<<"CHECK "<<check<<endl;
	// cout<<"CNT "<<cnt;
	if(cnt!=n && check) cout<<"NO";
	else cout<<"YES";
	return 0;

}