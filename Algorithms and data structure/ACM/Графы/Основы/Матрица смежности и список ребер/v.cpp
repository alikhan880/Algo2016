#include <iostream>
using namespace std;

int a[110][110];

int main(){
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]){
				for(int k=0; k<n; k++){
					if(a[j][k]==1 && a[i][k] != 1){
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