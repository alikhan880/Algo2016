#include <iostream>

using namespace std;

int n;
string s;
int countA, countD;
int main(){
	cin>>n;
	cin>>s;

	for(int i=0; i<n; i++){
		if(s[i] == 'A') countA++;
		else if(s[i] == 'D') countD++;
	}

	if(countA > countD) cout<<"Anton";
	else if(countA < countD) cout<<"Danik";
	else cout<<"Friendship";
}