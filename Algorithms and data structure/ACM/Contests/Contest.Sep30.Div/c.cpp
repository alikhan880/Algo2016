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

using namespace std;

queue<pair<int, int> > q;
int n, m, t, T, u, v;
vector<pair<int,int> > vec[5050];
bool used[5050];
vector<int> p;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n>>m>>T;

	for(int i=0; i<m; i++){
		cin>>u>>v>>t;
		vec[u].push_back(make_pair(v,t));
	}

	q.push(make_pair(1,0));
	used[1] = true;
	int c = 0;
	while(!q.empty()){
		if(q.front().second >= T){
			break;
		}

		for(int i=0; i<vec[q.front().first].size(); i++){
			int to = vec[q.front().first][i].first;
			if(!used[to]){
				used[to] = true;
				int sum = vec[q.front().first][i].second + vec[to][i].second;
				q.push(make_pair(to, sum));
				p[to] = q.front().first;
			}
		}	
		q.pop();
		c++;
	}

	cout<<c<<endl;
	for(int i=0; i<p.size(); i++){
		cout<<p[i]<<" ";
	}


	return 0;
}