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

int n, m, a[100100], ans = 0;
vector <int> v[100100];
bool used[100100];

void count(int ver, int sost){
	used[ver] = true;

	if(m < sost){
		return;
	}
	if(ver!= 1 && v[ver].size() == 1){
		ans++;
	}

	for(int i=0; i<v[ver].size(); i++){
		if(!used[v[ver][i]]){
			if(a[v[ver][i]] == 0){
				count(v[ver][i], 0);
			}
			else{
				count(v[ver][i], sost+1);
			}
		}
	}

	// return ans;

}


int main(){

	// freopen("b.in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;

	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n-1; i++){
		int p, q;
		cin>>p>>q;
		v[p].push_back(q);
		v[q].push_back(p);
	}

	if(a[1] == 1){
		count(1, 1);
	}
	else{
		count(1, 0);
	}

	cout<<ans;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}