#include <iostream>
using namespace std;

int a[40];
int n;


int main(){
	cin>>n;

	a[1] = 1;
	a[2] = 2;
	a[3] = 4;


	for(int i=4; i<=n; i++){
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}

	cout<<a[n];
}