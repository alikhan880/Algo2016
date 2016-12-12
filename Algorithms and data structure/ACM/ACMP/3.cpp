#include <iostream>
#include <sstream>

using namespace std;

string toString(int num){
	stringstream ss;
	string temp;
	ss<<num;
	ss>>temp;

	return temp;
}

int main(){
	int n;
	cin>>n;

	int a = n/10;
	int ans = a*(a+1);

	string s = toString(ans) + "25";

	if(s[0] == '0'){
		s.erase(s.begin());
	}
	cout<<s;

	return 0;
}