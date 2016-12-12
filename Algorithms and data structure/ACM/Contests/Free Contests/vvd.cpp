#include <iostream>
using namespace std;

int n, a[100];
int main(){
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	if(n==1 && a[1] != 0 && a[1] != 15){
		cout<<-1;
	}
	else if(n==1 && a[1] == 0){
		cout<<"UP";
	}
	else if(n==1 && a[1] == 15){
		cout<<"DOWN";
	}
	else{
		if(a[n]>a[n-1]){
			if(a[n] == 15){
				cout<<"DOWN";
			}
			else{
				cout<<"UP";
			}
		}
		else{
			if(a[n] == 0){
				cout<<"UP";
			}
			else{
				cout<<"DOWN";
			}
		}
	}
	return 0;
}