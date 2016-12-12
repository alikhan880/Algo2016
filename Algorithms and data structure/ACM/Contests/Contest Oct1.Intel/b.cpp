#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;



int main(){

	// freopen("input.in", "r", stdin);
	int n;
	int shablon[110];
	string stroka[110];
	int c = 0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>shablon[i];
	}
	cin.ignore();
	
	

	

	for(int i=0; i<n; i++){
		getline(cin, stroka[i]);
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<stroka[i].size(); j++){
			if(stroka[i][j] == 'a' || stroka[i][j] == 'e' || stroka[i][j] == 'i' || stroka[i][j] == 'o' || stroka[i][j] == 'u' || stroka[i][j] == 'y'){
				c++;
			}
		}
		if(shablon[i] != c){
			cout<<"NO";
			return 0;
		}
		c = 0;
	}

	cout<<"YES";

	
	return 0;
}