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

vector <int> v;
int n,c = 0;
char str[120];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>str[i];
	}


	for(int i=1; i<=n; i++){
		if(str[i] == 'B'){
			c++;
		}
		if(str[i] == 'W'){
			v.push_back(c);
			c = 0;
		}
		if(i == n && str[n] == 'B'){
			v.push_back(c);
		}

	}
	c = 0;
	for(int i=0; i<v.size(); i++){
		if(v[i]>0){
			c++;
		}
	}

	cout<<c<<endl;
	
	for(int i=0; i<v.size(); i++){
		if(v[i]>0){
			cout<<v[i]<<" ";
		}
	}

	return 0;
}