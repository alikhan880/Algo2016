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
int c = 0;
int main(){

	// freopen("c.in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j] == 1){
				c++;
			}
		}
	}

	cout<<c/2;
	return 0;
}