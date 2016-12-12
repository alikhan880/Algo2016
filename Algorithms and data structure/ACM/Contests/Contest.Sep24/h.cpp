#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

char a[120][120];
int n;

int fact(int v){
	if(v<0){
		return 0;
	}
	if(v == 0){
		return 1;
	}
	else{
		return v * fact(v-1);
	}
}

int main(){
	cin>>n;
	int count = 0;
	int res1 = 0, res2 = 0;
	bool checkX = false, checkY = false;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=1; i<=n; i++){
		count = 0;
		for(int j=1; j<=n; j++){
			if(a[i][j] == 'C'){
				count++;
			}
		}
		if(count>1){
			res1 += fact(count)/2;
		}
	}


	for(int i=1; i<=n; i++){
		count = 0;
		for(int j=1; j<=n; j++){
			if(a[j][i] == 'C'){
				count++;
			}
		}
		if(count>1){
			res2+=fact(count)/2;
		}
	}


	cout<<res1+res2;

	return 0;
}