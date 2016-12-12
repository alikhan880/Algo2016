#include <iostream>
#include <stack>
using namespace std;

int n;
string str;
stack <char> s;

int main(int argc, char const *argv[])
{	
	int i=0;
	cin>>n;
	cin>>str;
	for(int i=0; i<str.size(); i++){
		if(s.empty()){
			s.push(str[i]);
		}
		else{
			if(str[i] == '0'){
				if(s.top() == '1'){
					s.pop();
					n-=2;
				}
				else{
					s.push(str[i]);
				}
			}
			else if(str[i] == '1'){
				if(s.top() == '0'){
					s.pop();
					n-=2;
				}
				else{
					s.push(str[i]);
				}
			}
		}
	}

	cout<<n;
	return 0;
}