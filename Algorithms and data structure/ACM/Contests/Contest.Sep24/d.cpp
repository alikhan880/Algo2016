#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

queue <pair<int, int> > q;
bool used[10100];
int n,m;

int main(){
	cin>>n>>m;
	q.push(make_pair(0,n));

	while(!q.empty()){
		if(q.front().second == m){
			cout<<q.front().first;
			return 0;
		}

		int red = q.front().second*2;
		int blue = q.front().second-1;

		if(!used[red] && red>=0){
			q.push(make_pair(q.front().first+1, red));
		}

		if(!used[blue] && blue>=0){
			q.push(make_pair(q.front().first+1, blue));
		}
		
		q.pop();
	}

	return 0;
}