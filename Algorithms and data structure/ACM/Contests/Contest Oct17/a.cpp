#include <iostream>

using namespace std;

int main(){
	int k,r;

	cin>>k>>r;
	int c = 0;
	int t = k;
	
	while((t%10 - r != 0)){
		if(t%10 == 0){
			cout<<t/k;
			return 0;
		}		
		t+=k;
	}
	cout<<t/k;
	return 0;
}