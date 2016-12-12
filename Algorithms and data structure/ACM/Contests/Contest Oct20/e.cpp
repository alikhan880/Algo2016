#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

string str;
vector<char> v;
int main(){
	freopen("easy.in", "r", stdin);
	freopen("easy.out", "w", stdout);


	getline(cin, str);

	for(int i=0; i<str.size(); i++){
		if(str[i] == '-'){
			v.push_back(str[i++]);
			while(str[i]>=48 && str[i]<=57 && i<str.size()){
				v.push_back('+');
				v.push_back(str[i]);
				i++;
			}
		}
		v.push_back(str[i]);
	}

	for(int i=1; i<v.size(); i++){
		if((v[i-1] == '-' && v[i] == '-') || (v[i-1] == '-' && v[i] == '+') || (v[i-1] == '+' && v[i] == '-') || (v[i-1] == '+' && v[i] == '+')){
			v.erase(v.begin()+i);
		}
	}

	for(int i=0; i<v.size(); i++){
		cout<<v[i];
	}


	return 0;
}