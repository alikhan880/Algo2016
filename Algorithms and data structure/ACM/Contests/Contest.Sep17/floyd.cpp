#include <iostream>
#include <fstream>
using namespace std;

int a[120][120];
int n;

int main(){
	freopen("floyd.in", "r", stdin);
	freopen("floyd.out", "w", stdout);

	cin>>n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}


	for(int k = 0; k<n; k++){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(a[i][k]<1001 && a[k][j] < 1001){
					a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
				}
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}