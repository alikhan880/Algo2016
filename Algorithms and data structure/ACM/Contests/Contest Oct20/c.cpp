#include <iostream>
#include <vector>

using namespace std;

vector<string> v;
string s1,s2,temp1 = "", temp2 = "";

int main(){

	// freopen("concatenation.in", "r", stdin);
	// freopen("concatenation.out", "w", stdout);

	cin>>s1>>s2;
	int i=0; j=0;

	while(i<s1.size()){
		temp1+=s1[s1.size()-i];
		while(j<s2.size()){
			temp2+=s2[s2.size()-j];
			j++;
		}
		i++;
	}

	return 0;
}