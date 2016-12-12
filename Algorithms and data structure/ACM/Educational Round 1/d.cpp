#include <iostream>

using namespace std;


int i, n, m, k, x, y, res;

char mp[1010][1010];
int used[1010][1010];
int ans[100100];
void jur(int x, int y){
	if(x == 0 || y == 0 || x>n || y>m) return;
	if(mp[x][y] == '*'){res++; return;}
	used[x][y] = i;
	if(!used[x+1][y]) jur(x+1, y);
	if(!used[x][y+1]) jur(x, y+1);
	if(!used[x-1][y]) jur(x-1, y);
	if(!used[x][y-1]) jur(x, y-1);
}

int main(){
	cin>>n>>m>>k;
	for(i=1; i<=n; i++) for(int j=1; j<=m; j++) cin>>mp[i][j];

	for(i=1; i<=k; i++){
		res = 0;
		cin>>x>>y;
		if(!used[x][y]) jur(x, y);
		else res = ans[used[x][y]];
		ans[i] = res;
		cout<<res<<endl;
	}

	// for(i=1; i<=n; i++) {
	// 	for(int j=1; j<=m; j++){
	// 		cout<<used[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	return 0;
}