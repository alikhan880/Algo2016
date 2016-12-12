#include <iostream>
#include <vector>

#define pb push_back

using namespace std;

vector<string> vs;
string s;

int main(){

	cin>>s;

	for(int i=0; i<s.size(); i++){
		string temp = "";
		while(s[i] != ',' || s[i] != ';'){
			temp+=s[i];
		}
		vs.pb(temp);
		temp = "";
	}

	for(int i=0; i<vs.size(); i++) cout<<vs[i]<<endl;

}