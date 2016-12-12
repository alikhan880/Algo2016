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

string str[110], res;
int n, k, c = 0;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>k;

	for(int i=0; i<n; i++){
		cin>>str[i];
	}
	cin>>res;

	for(int i=0; i<n; i++){
		if(str[i].length()<res.length()){
			c++;
		}
	}
	int min, max;
	if(c == 0){
		min = 1;
		max = n%k * 5 + 10;
	}
	else{
		min = c%k * 5 + 5 + 10;
		max = c%k*5 + (n-c)%k * 5 + 10;
	}
	

	cout<<min<<" "<<max;

	return 0;
}