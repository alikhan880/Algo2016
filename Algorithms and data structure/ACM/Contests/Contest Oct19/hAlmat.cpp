#include <iostream>
#include <vector>
using namespace std;
int n, stop;
string s;
vector<char> v;
bool ok = false;

int main() {
	cin>>n>>s;
	stop = 97 + n;
	v.push_back('a');
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '=') {
			v.push_back(v[i]);
		} else if(s[i] == '>') {
			if(v[i] == 'a') {
				for(int j = 0; j <= i; j++) {
					if(v[j] + 1 == stop) {
						cout<<-1;
						return 0;
					}
					v[j]++;
				}
			}
			v.push_back('a');
		} else if(s[i] == '<') {
			if(v[i] + 1 == stop) {
				
				for(int j = 0; j <= i; j++) {
					if(v[j] == 'a') {
						ok = true;
					}
				}
				if(ok) {
					cout<<-1;
					return 0;
				} else {
					for(int j = 0; j <= i; j++) {
						v[j]--;
					}

				}

				v.push_back(v[i] + 1);
				
			} else {
				v.push_back(v[i] + 1);
			}
		}
	}
	for(int i = 0; i < v.size(); i++) {
		cout<<v[i];
	}
	return 0;
}