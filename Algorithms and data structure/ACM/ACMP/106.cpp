#include <iostream>
using namespace std;
int main(){
	int n, o = 0, r = 0;
	cin>>n;
	int a[n+1];
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
		if(a[i] == 0){
			o++;
		}
		else if(a[i] == 1){
			r++;
		}
	}

	if(o<=r){
		cout<<o;
	}
	else{
		cout<<r;
	}
  
  	
	return 0; 
}