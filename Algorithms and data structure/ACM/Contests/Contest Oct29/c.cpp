#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int n;
long long d, c, summa, answer;
vector <pair<long long, long long> > v;

int main(){

	cin>>n>>d;

	for(int i=0; i<n; i++){
		long long p,q;
		cin>>p>>q;
		v.push_back(make_pair(p,q));
	}
	
	sort(v.begin(), v.end());

	
	for(int i=0; i<n; i++){
		summa += v[i].second;

		while(v[i].first - v[c].first >= d){
			summa -= v[c].second;
			++c;
		}

		if(summa>answer){
			answer = summa;
		}
	}

	cout<<answer;



	return 0;
}