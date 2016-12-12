#include <iostream>

using namespace std;

int main(){

	int n,k,n1;

	cin>>n>>k>>n1;

	int area = n*n;

	int carea = k*n1*n1;

	if(carea>=area){
		cout<<"YES";
	}

	else{
		cout<<"NO";
	}

	return 0;
}