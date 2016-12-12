#include <iostream>
using namespace std;
int main(){
	int s, p;
	cin>>s>>p;

	for(int i=0; i<=1000; i++){
		for(int j=0; j<=1000; j++){
			if(i+j == s && i*j == p){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}

	return 0;
}