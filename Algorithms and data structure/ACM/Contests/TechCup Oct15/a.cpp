#include <iostream>
#include <queue>

using namespace std;
queue<long long> q;
vector<bool> used;
vector<long long> res;
int main(){

	long long a, b;
	cin>>a>>b;
	used[a] = true;
	q.push(a);
	res.push_back(a);
	while(!q.empty()){
		
		int v = q.front();
		if(v == b){
			break;
		}else{
			if(!used[v*2]){
				q.push(v*2);
				res.push_back(q.front());
			}
			if(!used[10*v+2]){
				q.push(10*v+2);
				res.push_back(q.front());
			}
		}
		q.pop();
	}

	cout<<res.size()<<" ";
	return 0;
}