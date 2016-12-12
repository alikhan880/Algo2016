#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

int a[120][120];
int n;


int main(){

	// freopen("a.in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j && a[i][j] != 0 || i==j &&a[j][i] != 0){
				cout<<"NO";
				return 0;
			}
			else{
				if(a[i][j] != a[j][i]){
					cout<<"NO";
					return 0;
				}
			}
		}
	}

	cout<<"YES";

	return 0;
}