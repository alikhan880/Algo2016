#include <iostream>
using namespace std;

int a[1010], n;

int main(){

	scanf("%d", &n);

	a[0] = 1;
	for(int i=1; i<=n; i++) a[i] = a[i-1] + i;

	printf("%d\n", a[n]);
	return 0;
}