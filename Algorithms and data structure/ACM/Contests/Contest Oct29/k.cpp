#include <iostream>
using namespace std;

int a[20][20];
int n;

int main(){
	cin>>n;

	for(int i=1; i<=n; i++){
		a[i][1] = 1;
	}

	for(int i=1; i<=n; i++){
		a[1][i] = 1;
	}

	for(int i=2; i<=n; i++){
		for(int j=2; j<=n; j++){
			a[i][j] = a[i-1][j] + a[i][j-1];
		}
	}

	cout<<a[n][n];


	return 0;
}