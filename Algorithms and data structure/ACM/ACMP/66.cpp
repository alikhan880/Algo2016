#include <iostream>

using namespace std;

int main(){
	string q = "qwertyuiopasdfghjklzxcvbnm";
	char c;
	cin>>c;
	int index;
	for(int i=0; i<26; i++){
		if(q[i] == c) index = i;
	}

	if(index == 25) cout<<q[0];
	else cout<<q[index+1];
	return 0;
}