#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>

#define pb push_back
#define ll long long
#define vi vector<int>
#define vs vector<string>

using namespace std;

char s[100100];
string str;

vs numb, words;

int main(){
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%s", s);
	str = s;
	// printf("%s\n", str.c_str());

	int sz = str.size();

	for(int i=0; i<sz; i++){
		string temp = "";
		int j = i;
		while(j<sz && (str[j] != ',' && str[j] != ';')){ 
			temp+=str[j++];  
		}
		// if(j == sz - 1 && (str[j] == ',' || str[j] == ';')) words.pb("");
		// cout<<temp.size()<<endl;
		// cout<<temp<<endl;
		bool check = false;
		if(temp.size() == 0){
			words.pb("");
			check = true;
		}
		else{
			// cout<<temp.size()<<endl;
			for(int k=0; k<temp.size(); k++){
				if(temp[k] == '.'||(temp[k]>='a' && temp[k]<='z') || (temp[k]>='A' && temp[k]<='Z') || (temp[0] == '0' && temp.size() != 1)){
					words.pb(temp);
					check = true;
					break;
				}
			}
		}

		if(!check) numb.pb(temp);
		temp = "";
		i = j;
	}

	if(str[sz-1] == ',' || str[sz-1] == ';') words.pb("");
	// cout<<"NYU "<<numb.size()<<endl;
	
	if(numb.size() == 0) cout<<'-'<<endl;
	else{
		cout<<'"';
		for(int i=0; i<numb.size(); i++){
			if(i!=numb.size()-1) cout<<numb[i]<<",";
			else cout<<numb[i];
		}
		cout<<'"'<<endl;
	}
	// cout<<"WE "<<words.size()<<endl;
	if(words.size() == 0) cout<<'-'<<endl;
	else{
		cout<<'"';
		for(int i=0; i<words.size(); i++){
			if(i!=words.size() - 1) cout<<words[i]<<",";
			else cout<<words[i];
		}
		cout<<'"';
	}



	return 0;
}