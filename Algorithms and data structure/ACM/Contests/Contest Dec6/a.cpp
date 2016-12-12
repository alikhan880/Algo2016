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
#include <string>

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>

using namespace std;

ll n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	// scanf("%ld", &n);
	cin>>n;
	if(n == 0){
		cout<<1;
		return 0;
	}
	n = n % 4 + 4;
	ll res = 1;

	for(int i=0; i<n; i++) res = res*8;
	

	res = res%10;
	// printf("%ld", res);
	cout<<res;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}