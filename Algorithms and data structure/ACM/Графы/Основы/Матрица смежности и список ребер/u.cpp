#include <iostream>
using namespace std;


int a[110][110];
int n,m,p,q;

int main(){
	cin>>n>>m;

	for(int i=0; i<m; i++){
		cin>>p>>q;
		a[p][q] = 1;
		a[q][p] = 1;
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			for(int k=1; k<=n; k++){
				if(i!=j && j!=k && k!=i){
					if((a[i][j]==1 && a[j][k]==1 && a[i][k]==0) || (a[i][j]==1 && a[j][k]==0 && a[i][k]==1) || (a[i][j]==0 && a[j][k]==1 && a[i][k]==1)){
						cout<<"NO";
						return 0;
					}
				}
			}
		}
	}

	cout<<"YES";

	return 0;
}