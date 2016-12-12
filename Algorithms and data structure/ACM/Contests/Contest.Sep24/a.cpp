#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

char s[60];
int n, t;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>t;
	
	for(int i = 1; i<=n; i++){
		cin>>s[i];
	}

	for(int k = 1; k<=t; k++){
		for(int i = 1; i<=n; i++){
				if(s[i] == 'B' && s[i+1] == 'G'){
					s[i] = 'G';
					s[i+1] = 'B';
					i++;
				}
			}
		}

	for(int i=1; i<=n; i++){
		cout<<s[i];
	}


	return 0;
}