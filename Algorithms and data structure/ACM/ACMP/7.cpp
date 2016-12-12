#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(string a, string b){
	if(a.size()>b.size()) return true;
	else if(a.size() == b.size()){
		for(int i=0; i<a.size(); i++){
			if(a[i]>b[i]) return true;
			else if(a[i]<b[i]) return false;
		}
	}
	return false;
}

vector<string> v;
string str;
int main(){
	for(int i=0; i<3; i++){
		cin>>str;
		v.push_back(str);
	}
	// string monety[3];
	// cin>>monety[0]>>monety[1]>>monety[2];
	sort(v.begin(), v.end(), comp);
	cout<<v[0];

	return 0;
}