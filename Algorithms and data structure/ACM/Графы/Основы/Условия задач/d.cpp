#include <iostream>
using namespace std;

int a[120][120];
int n,q, mini = 30000, x, y, z;
int p[120][120];
int main(){
	// freopen("din.txt", "r", stdin);
	// freopen("dout.txt", "w", stdout);

	cin>>n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
			if(a[i][j] == 0){
				a[i][j] = 1001;
			}
		}
	}

	for(int k=1; k<=n; k++){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(a[k][j]!=0 && a[i][k] != 0 && a[i][j] != 0){
					if(mini > a[i][j] + a[k][j] + a[i][k]) {
                        mini = a[i][j] + a[k][j] + a[i][k];
						x=k;
						y=i;
						z=j;
					}
				}
			}
		}
	}

	cout<<x<<" "<<y<<" "<<z;

	return 0;
}