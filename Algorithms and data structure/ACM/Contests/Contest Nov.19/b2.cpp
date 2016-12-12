#include <iostream>
#include <cmath>
#include <algorithm>

#define ll long long

using namespace std;

ll n, k, a[303000], b[300300];

int bin(ll p){
	int l = 0;
	int r = n-1;
	// int res = 0;
	while(l<r){
		int mid = (l+r)/2;
		if(a[mid]<=p) l = mid+1;
		else r = mid;
	}

	if(a[r] <= p) return r+1;
	else return r;
}


int main(){

	cin>>n>>k;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<k; i++) cin>>b[i];
	sort(a, a+n);
	// for(int i=0; i<n; i++) cout<<a[i]<<" ";
	// 	cout<<endl;	
	for(int j=0; j<k; j++){
		cout<<bin(b[j])<<" ";
	}

	return 0;
}