#include <fstream>
#include <iostream>
using namespace std;
int a[200][200];

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, count = 0;
	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			a[j][i] = a[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j] == 1){
				count++;
			}
		}
	}

	cout<<count/2;

	return 0;
}
