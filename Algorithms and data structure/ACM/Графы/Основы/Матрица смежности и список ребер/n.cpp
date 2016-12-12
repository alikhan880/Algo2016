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
int c = 0, c1 = 0;

int main(){

	// freopen("n.in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j] == 1){
				c++;
			}

			if(a[j][i] == 1){
				c1++;
			}
		}
		cout<<c1<<endl;
		cout<<c<<endl;
		c = 0;
		c1 = 0;
	}


	return 0;
}