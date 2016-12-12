#include <iostream>

using namespace std;

string a[10][10];

int main(){

	int n;
	char c;

	cin>>c>>n;

	for(int i=1; i<=8; i++){
		if(i%2 == 0){
			for(int j=1; j<=8; j++){
				if(j%2 == 0){
					a[i][j] = "BLACK";
				}
				else{
					a[i][j] = "WHITE";
				}
			}
		}
		else{
			for(int j=1; j<=8; j++){
				if(j%2 == 0){
					a[i][j] = "WHITE";
				}
				else{
					a[i][j] = "BLACK";
				}
			}	
		}
	}

	cout<<a[n][c - 64];

	return 0;
}