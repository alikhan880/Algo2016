#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

vector<char> Left;
vector<char> Right;

int n,k;
char q;
int voda = 0;
bool stena1 = true;
bool stena2 = false;

int main(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>Left[i];
	}

	for(int i=1; i<=n; i++){
		cin>>Right[i];
	}
	int pos = 1;
	while(pos<n){
		if(stena1){
			if(Right[pos+k]!='X'){
				pos += k;
				stena1 = false;
				stena2 = true;
			}
			else if(pos > voda && Left[pos-1] != 'X'){
				pos -= 1;
			}

			else if(pos>voda && Left[pos+1] != 'X'){
				pos += 1;
			}

			else{
				cout<<"NO";
				return 0;
			}
		}

		if(stena2){
			if(Left[pos+k]!='X'){
				pos+=k;
				stena2 = false;
				stena1 = true;
			}


			else if(pos>voda && Right[pos-1] != 'X'){
				pos -= 1;
			}

			else if(pos>voda && Right[pos+1] != 'X'){
				pos += 1;
			}
			else{
				cout<<"NO";
				return 0;
			}
		}
		voda++;
	}

	cout<<"YES";
	return 0;
}