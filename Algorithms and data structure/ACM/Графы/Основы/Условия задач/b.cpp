#include <iostream>
using namespace std;
int a[200][200];
int b[200];
int main(){
	int n, m, x,y;
	cin>>n>>m;

	for(int i = 1; i <= m; i++){
		cin>>x>>y;
		a[x][y] = 1;
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1 || a[j][i] == 1){
				b[i]++;
			}
		}
	}

	for(int i=1; i <= n; i++){
		cout<<b[i]<<" ";
	}
	return 0;
}