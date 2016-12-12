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

vector<int> in, out;
int a[120][120];
int n, c = 0;
bool check = true;
int main(){

	// freopen("p.in", "r", stdin);
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
				check = false;
				break;
			}
		}
		if(check){
			in.push_back(i);
		}
		check = true;
	}

	check = true;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[j][i] == 1){
				check = false;
				break;
			}
		}
		if(check){
			out.push_back(i);
		}
		check = true;
	}

	cout<<out.size()<<endl;

	for(int i=0; i<out.size(); i++){
		cout<<out[i]<<endl;
	}

	cout<<in.size()<<endl;

	for(int i=0; i<in.size(); i++){
		cout<<in[i]<<endl;
	}

	return 0;
}