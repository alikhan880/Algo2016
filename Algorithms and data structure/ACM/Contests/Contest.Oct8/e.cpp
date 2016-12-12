#include <iostream>

using namespace std;

int main(){

	int n;

	cin>>n;

	n = n - 10;

	if(n>=1 && n < 10){
		cout<<4;
	}

	else if(n == 0){
		cout<<0;
	}
	else if(n == 10){
		cout<<15;
	}
	else if(n == 11){
		cout<<4;
	}
	else{
		cout<<0;
	}


	return 0;
}