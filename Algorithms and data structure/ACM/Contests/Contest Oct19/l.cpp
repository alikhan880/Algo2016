#include <iostream>

using namespace std;

int n, d, a, b, kI=1, kD = 1;
int ar[100100];
int shares = 0;
int main(){
	scanf("%d%d%d%d", &n, &d, &a, &b);

	for(int i=0; i<n; i++){
		cin>>ar[i];
	}

	for(int i=1; i<n; i++){
		if(ar[i]>ar[i-1]){
			kD = 1;
			int x = kI*a;
			kI++; 
			int c = 0;
			while(c<x){
				if(d<ar[i]){
					break;
				}
				else{
					d-=ar[i];
					c++;
					shares++;
				}
			}
		}
		else if(ar[i]<ar[i-1]){
			kI = 1;
			int y = kD*b;
			kD++;
			int c = 0;
			while(c<y){
				if(shares == 0){
					break;
				}
				d+=ar[i];
				c++;
				shares--;
			}
		}
	}


	cout<<d<<" "<<shares;



	return 0;
}