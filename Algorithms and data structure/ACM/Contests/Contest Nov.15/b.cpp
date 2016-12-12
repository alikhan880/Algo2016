#include <iostream>
#include <cmath>
using namespace std;
int a[4];
int c256, c32;
int main(){

	for(int i=0; i<4; i++){
		cin>>a[i];
	}

	int min256 = min(a[0], min(a[2], a[3]));
	a[0]-=min256; a[2]-=min256; a[3]-=min256;

	int min32 = min(a[0], a[1]);

	cout<<256*min256+32*min32; 

	return 0;
}