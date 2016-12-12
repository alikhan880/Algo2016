#include <iostream>

using namespace std;
const long long Inf = (long long)1e18;

int n, T;
int p[100100], d[100100];
long long dp[100100], t[4*50500];
	
void build(int v, int tl, int tr){	
	if(tl == tr){
		t[v] = dp[tl];
	}
	else{
		int mid = (tl+tr)/2;
		build(2 * v, tl, mid);
		build(2 * v + 1, mid + 1, tr);
		t[v] = min(t[2 * v], t[2 * v + 1]);
	}
}
//checked
void update(int v, int tl, int tr, int pos, long long val){
	if(tl == tr){
		t[v] = val;
	}else{
		int mid = (tl+tr)/2;
		if(pos<=mid){
			update(2 * v, tl, mid, pos, val);
		} 
		else{
			update(2 * v + 1, mid + 1, tr, pos, val);
		}

		t[v] = min(t[2 * v], t[2 * v + 1]);
	}
}
//checked
long long getMin(int v, int tl, int tr, int l, int r){
	if(tl>r || tr<l){
		return Inf;//???
	}

	if(l<=tl && tr<=r){
		return t[v];
	}

	int mid = (tl + tr)/2;

	long long ans1 = getMin(2 * v, tl, mid, l, r);
	long long ans2 = getMin(2 * v + 1, mid+1, tr, l, r);

	return min(ans1, ans2);
}
//checked

bool can(int r){
	dp[0] = 0;
	for(int i = 1; i < n; i++){
		dp[i] = Inf;//???
	}

	build(1, 0, n - 1);

	for(int i = 1; i < n; i++){
		int L = i - r, R = i-1;
		L = max(L, 0);
		long long value = getMin(1, 0, n - 1, L, R);
		value += d[i];
		dp[i] = value;
		update(1, 0, n - 1, i, value);
	}
	return dp[n - 1] <= T;	
}
//checked
int main(){

	freopen("journey.in", "r", stdin);
	freopen("journey.out", "w", stdout);


	cin>>n>>T;
	
	for(int i=1; i<=n-1; i++){
		cin>>p[i];
	}

	for(int i=1; i<n-1; i++){
		cin>>d[i];
	}

	T -= n - 1; 
	d[n - 1] = 0;

	int L = 1, R = n - 1, Rmin = n - 1;

	while(L<=R){
		int mid = (L + R)/2;

		if(can(mid)){
			Rmin = mid;
			R = mid - 1;
		}
		else{
			L = mid+1;
		}
	}

	int ans = (int)1e9;

	for(int i = Rmin; i <= n - 1; i++){
		ans = min(ans, p[i]);
	}

	cout<<ans;

	return 0;
}