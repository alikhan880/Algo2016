#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	//BUBBLESORT
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
	//BUBBLESORT
	
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}

	return 0;
}