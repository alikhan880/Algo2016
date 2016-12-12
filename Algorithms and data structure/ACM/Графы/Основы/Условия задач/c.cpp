#include <iostream>
#include <fstream>
using namespace std;

int a[120][120];
int b[120];

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j<n; j++){
			cin>>a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		cin>>b[i];
	}

	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j<n; j++){
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// for(int i = 0; i < n; i++){
	// 	cout<<b[i]<<" ";
	// }
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 1){
				if(b[i]!=b[j]){
					count++;
				}
			}
		}
	}

	cout<<count/2;

	return 0;	
}