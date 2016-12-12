#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;



long long p(long long v){
	long long P = 132*v*v*v + 77*v*v + 1345*v +1577;
	return P%1743;
}


int comp(const void *i, const void *j){
  return *(int*)i - *(int*)j;
}



int main(){

	// freopen("kth.in", "r", stdin);
	freopen("kth.out", "w", stdout);
	int n,k;
	cin>>n>>k;
	int a[n];
	n%=1743;
	k%=1743;
	for(int i=1; i<=n; i++){
		a[i-1] = p(i);
	}
	cout<<n<<endl;
	cout<<k<<endl;
	cout<<"Before"<<endl;
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}

	cout<<endl;
	qsort(a, n, sizeof(int),comp);

	cout<<"After"<<endl;

	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	// double a,b;
	// cin>>a>>b;
	// cout<<a*b*b;
	return 0;
}