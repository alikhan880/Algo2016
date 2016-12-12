#include <iostream>
using namespace std;
int a[3], b[3];

int main(){

	for(int i=0; i<3; i++){
		cin>>a[i];
	}
	for(int i=0; i<3; i++){
		cin>>b[i];
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(b[i]>b[j]){
				swap(b[i],b[j]);
			}
		}
	}
	
	cout<<a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
	return 0;
}