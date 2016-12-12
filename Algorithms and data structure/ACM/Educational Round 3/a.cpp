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

int n, m;
vi v(110);

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d%d", &n, &m);

	for(int i=0; i<n; i++) scanf("%d", &v[i]);

	sort(v.begin(), v.begin() + n);

	// for(int i=0; i<n; i++) printf("%d ", v[i]);
	
	int sum = 0;
	int c = 0;
	int i=n-1;
	while(sum<m){
		sum += v[i--];
		c++; 
	}

	printf("%d\n", c);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}