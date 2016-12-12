#include <iostream>
#include <vector>
#include <sstream>

#define pb push_back


using namespace std;


vector <int> v[50500], v2[50500];
int n, q;


int main(){
	cin>>n;
	cin.ignore();

	for(int i=1; i<=n; i++){
		string str;
		int val;
		getline(cin, str);
		stringstream ss(str);
		if(!str.empty()) while(ss>>q) v[i].pb(q);
	}


	for(int i=1; i<=n; i++) for(int j=0; j<v[i].size(); j++) v2[v[i][j]].pb(i);

	cout<<n<<endl;
	for(int i=1; i<=n; i++){
		for(int j=0; j<v2[i].size(); j++){
			cout<<v2[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}