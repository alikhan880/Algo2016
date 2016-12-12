#include <iostream>

using namespace std;

int main(){
	int n1, n2;
	char c1, c2, slash;
	cin>>c1>>n1>>slash>>c2>>n2;
	if(n1<1 || n1>8 || n2<1 || n2>8 || c1<'A' || c1 > 'H' || c2<'A' || c2 >'H' || slash != '-'){
		cout<<"ERROR";
	}

	else if((abs(c1-c2) == 1 && abs(n1 - n2) == 2) || (abs(c1-c2) == 2 && abs(n1-n2 == 1))){
		cout<<"YES";
	}

	else{
		cout<<"NO";
	}
	return 0;
}