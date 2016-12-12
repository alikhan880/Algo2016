#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


double convert(string n){
	istringstream buffer(n);
	double val;
	buffer>>val;

	return val;
}

int main(){
	string str;
	stringstream ss;
	vector<string> s;
	getline(cin, str);
	string temp = "";
	for(int i=0; i<str.size(); i++){
		if(str[i] >= 48 && str[i] <=57){
			int c = 0;
			for(int j = i; j<str.size(); j++){
				if(str[j]<46 || str[j]>57){
					break;
				}
				c++;
			}

			for(int j = i; j < i+c; j++){
				temp+=str[j];
			}

			// cout<<temp<<endl;

			s.push_back(temp);
			i = i+c;
			temp = "";
			c = 0;
		}
	}
	double sum = 0;
	for(int i=0; i<s.size(); i++){
		int t;
		for(int j=0; j<s[i].size(); j++){
			int index;
			if(s[i][j] == 46){
				index = j;
			}
			int t = s[i].size()-1 - j;
			cout<<t<<endl;
			t = 0;
			j = index;
		}
		double temp = convert(s[i]);
		cout<<temp<<endl;
		sum+=temp;
	}

	cout<<sum;


	return 0;
}