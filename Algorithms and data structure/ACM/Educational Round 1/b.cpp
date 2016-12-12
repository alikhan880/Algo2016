#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> lv, rv, kv;
string str;
int m, l, r, k;



int main(){

	// scanf("%s", &str);
	cin>>str;
	// change(3, 5, 1);
	// scanf("%d", &m);
	cin>>m;
	for(int i=0; i<m; i++){
		// scanf("%d %d %d", &l, &r, &k);
		cin>>l>>r>>k;
		k = k%(r - l + 1);
		l--; r--;
		str = str.substr(0, l) + str.substr(r - k + 1, k) + str.substr(l, r - k - l + 1 ) + str.substr(r+1);
	}

	// printf("%s", str.c_str());
	cout<<str;


	return 0;
}