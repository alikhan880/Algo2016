#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

string convert(int n){
	string s;
	stringstream ss;
	ss << n;
	ss >> s;
	return s;
}

int main(){
	stack <int> s;
	int c = 0;
	int sum = 0;
	string str;

	cin>>str;
	int sz = str.size();

	while(sz>1){
		for(int i=0; i<str.size(); i++){
			s.push(str[i] - 48);
		}

		while(!s.empty()){
			sum+=s.top();
			s.pop();
		}

		str = convert(sum);
		sum = 0;
		sz = str.size();
		c++;
	}
	cout<<c<<endl;
	return 0;
}