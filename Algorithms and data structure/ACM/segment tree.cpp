#include <iostream>

using namespace std;

int a[100100], t[4*100100];

void build(int v, int tl, int tr){
	if(tl == tr){
		t[v] = a[tl];
	}
	else{
		int mid = (tl + tr) >> 1;

		build(2 * v, tl, mid);
		build(2 * v + 1, mid + 1, tr);

		t[v] = t[2 * v] + t[2 * v + 1];
		
	}

}


void update(int v, int tl, int tr, int pos, int val){
	if(tl == tr){
		t[v] = val;
	}
	else{
		int mid = (tl + tr) >> 1;
		if(pos<=mid){
			update(2 * v, tl, mid, pos, val);
		}
		else{
			update(2 * v + 1, mid + 1, tr, pos, val);
		}

		t[v] = t[2 * v] + t[2 * v + 1];
	}
}

int getSum(int v, int tl, int tr, int l, int r){
	if(tl>r || tr<l){
		return 0;
	}

	if(l <= tl && tr <= r){
		return t[v];
	}

	int mid = (tl + tr) >> 1;
	int ans1 = getSum(2 * v, tl, mid, l, r);
	int ans2 = getSum(2 * v + 1, mid + 1, tr, l, r);

	return ans1 + ans2;
}


int main(){
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	build(1, 0, n-1);

	cout<<"Update(Pos and val)"<<endl;
	int pos, val;
	cin>>pos>>val;
	pos--;
	update(1,0,n-1,pos,val);
	cout<<"L and R"<<endl;
	int l, r;
	cin>>l>>r;
	l--, r--;

	int a = getSum(1, 0, n-1, l, r);

	cout<<a;

	return 0;
}


