#include <iostream>

using namespace std;


int main(){


	double n;
	
	while(scanf("%lf", &n)!=EOF){
		while(n>18){
			n/=18;
		}

		if(n<=9){
			cout<<"Stan wins.\n";
		}
		else{
			cout<<"Ollie wins.\n";
		}
	}

	return 0;
}