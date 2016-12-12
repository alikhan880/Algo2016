#include <iostream>
#include <vector>

#define pb push_back

using namespace std;

int n, q;
vector<int> v;

int summa(){
	int sum = 0;
	for(int i=0; i<v.size(); i++) if(v[i]>0) sum+=v[i];	
	return sum;
}

int findMax(){
	int max = 0;
	for(int i=1; i<v.size(); i++) if(v[max] < v[i]) max = i;
	return max;
}

int findMin(){
	int min = 0;
	for(int i=1; i<v.size(); i++) if(v[min] > v[i]) min = i;
	return min;
}	

int main(){
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>q;
		v.pb(q);
	}

	int res = 1, beg, end;
	if(findMin()<=findMax()){
		beg = findMin();
		end = findMax();
	}
	else{
		beg = findMax();
		end = findMin();
	}
	for(int i = beg+1; i<end; i++) res*=v[i];

	cout<<summa()<<" "<<res;

	return 0;
}