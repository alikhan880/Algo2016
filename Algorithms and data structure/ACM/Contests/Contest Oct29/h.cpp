#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check(pair<int,int> s, pair<int, int> v){
	if(s.first > v.first){
		return true;
	}else if(s.first == v.first){
		if(s.second < v.second){
			return true;
		}else return false;
	}else return false;

}

vector<pair<int, int> > v;
int n, k, p, t, c;

int main(){

	cin>>n>>k;

	for(int i=0; i<n; i++){
		cin>>p>>t;
		v.push_back(make_pair(p,t));
	}

	sort(v.begin(), v.end(), check);
	// cout<<endl;
	// for(int i=0; i<v.size(); i++){
	// 	cout<<v[i].first<<" "<<v[i].second<<endl;
	// }

	// cout<<endl;
	pair<int, int> tmp = v[k-1];

	for(int i=0; i<v.size(); i++){
		if(v[i] == tmp){
			c++;
		}
	}

	cout<<c;
	return 0;
}