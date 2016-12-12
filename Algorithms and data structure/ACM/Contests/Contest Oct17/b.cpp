#include <iostream>

using namespace std;


int a[510], b[510];

int n, k, c = 0;


int main(){

	cin>>n>>k;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		b[i] = a[i];
	}


	for(int i=1; i<n; i++){
		if(a[i-1]+a[i] < k){
			a[i] = k - a[i-1];
		}
	}

	for(int i=0; i<n; i++){
		c = c+a[i] - b[i];
	}


	cout<<c<<endl;

	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}


	return 0;
}