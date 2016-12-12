#include <iostream>

using namespace std;
int a[1010];
int main(){
	int a1, a2, n;

	cin>>a1>>a2>>n;

	a[0] = a1;
	a[1] = a2;

	for(int i=2; i<n; i++){
		a[i] = a[i-1] + a[i-1] - a[i-2]; 
	}

	cout<<a[n-1];


	return 0;
}