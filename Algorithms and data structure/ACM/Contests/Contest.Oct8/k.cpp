#include <iostream>
using namespace std;
int main(){
	int n;
	long long a[120], k;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>k;
		if(i!=0){
			a[i] = a[i-1] + (k-1)*i + k;
		}
		else{
			a[i]=k;
		}
	}
	cout<<a[n-1];
	return 0;
}