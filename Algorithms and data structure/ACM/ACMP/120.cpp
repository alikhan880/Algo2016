#include <iostream>

using namespace std;

int a[30][30], b[30][30];
int n,m;

int main(){

	scanf("%d%d", &n, &m);

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}

	for(int i=1; i<n; i++){
		for(int j=1; j<m; j++){
			b[i-1][j] = b[i][j-1] + b[i][j];

		}
	}

	b[0][0] = a[0][0];
	b[0][1] = b[0][0] + a[0][1];
	b[1][0] = b[0][0] + a[1][0];

	for(int i=1; i<n; i++)
		for(int j=1; j<m; j++)
			b[i][j] = min(b[i-1][j], b[i][j-1]) + a[i][j];

	printf("%d\n", b[n-1][m-1]);

	return 0;
}