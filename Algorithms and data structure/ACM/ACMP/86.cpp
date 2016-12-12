#include <iostream>

using namespace std;

int main(){
	int n, res;

	cin>>n;

	if(n == 1 || n == 2){
		cout<<0;
		return 0;
	}
	else{
		res = n*n-(3*n-2);
	}

	cout<<res;
	return 0;
}