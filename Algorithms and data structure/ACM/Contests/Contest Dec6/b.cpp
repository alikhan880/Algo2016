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
#define mp make_pair

using namespace std;

int n,x;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &x);
	vi v(n);

	int sz;
	if(n%2 == 0) sz = n/2;
	else sz = n/2+1;
	for(int i=0; i<n; i++) scanf("%d", &v[i]);


	int c = 0;
	for(int i=0; i<n-1; i++){
		int t = v[i] ^ v[i+1];
		if(t == x) c++;
	}

	for(int i=n-1; i>0; i--){
		
	}

	printf("%d", c);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}