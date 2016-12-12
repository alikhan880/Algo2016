#include <iostream>

using namespace std;

int main(){
	long long b,d,s;
	long long res = 0;
	cin>>b>>d>>s;

	if(b == d && d == s){
		cout<<0;
		return 0;
	}

	else if((b<d && d<s) || (b==d && d<s)||(b==s && s<d)){
		cout<<2*s-b-d;
		return 0;
	}

	else if(b>d && d>s){
		cout<<b-s-1;
		return 0;
	}

	else if(b==d && d>s){
		cout<<b-s;
		return 0;
	}
	else if((b==s && s>d)||(s==d && b<s)){
		cout<<b-1;
		return 0;
	}
	else if(d==s && b>d){
		cout<<2*b-d-s;
		return 0;
	}

	return 0;
}