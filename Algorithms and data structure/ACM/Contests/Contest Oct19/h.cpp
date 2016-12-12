#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <fstream>
#include <deque>
using namespace std;

#define mp make_pair;
#define pb push_back;
#define ll long long;

int n;
string s;
vector <char> ch;
char stop;

void pass(char a){
	ch.push_back(a);
	char x = a;
	char b = x;
	for(int i=0;i<s.size();i++){
		if(s[i] == '='){
			ch.push_back(a);
		}else if(s[i] == '>'){
			if(a-1 == 96){
				ch.clear();
				b+=1;
				if(b < stop){
					pass(b);
					break;
				}
			}else{
				a--;
				ch.push_back(a);
			}
		}else if(s[i] == '<'){
			x = a+1;
			if(x>=stop){
				ch.clear();
				break;
			}else{
				a++;
				ch.push_back(a);
			}
		}
	}
}

int main(){

	char a = 'a';
	cin >> n >> s;
	stop = 97+n;
	pass(a);

	if(ch.empty() || ch.size() != s.size() + 1){
		cout << "-1";
	} else {
		for(int i=0;i<ch.size();i++){
			cout << ch[i];
		}
	}
	return 0;
}
