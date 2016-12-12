#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define pb push_back
using namespace std;

queue<int> q;
int n, nachalo, konec, p;
vector<int> v[110], d(110), pt(110), path;
bool used[110];

int main(){

	cin>>n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>p;
			if(p == 1){
				v[i].pb(j);
			}
		}
	}
	cin>>nachalo>>konec;
	// nachalo--; konec--;
	// cout<<nachalo<<" "<<konec<<endl;

	q.push(nachalo);
	used[nachalo] = true;
	pt[nachalo] = -1;
	while(!q.empty()){
		int temp = q.front();
		if(temp == konec) break;
		for(int i=0; i<v[temp].size(); i++){
			int to = v[temp][i];
			if(!used[to]){
				used[to] = true;
				q.push(to);
				d[to] = d[temp] + 1;
				pt[to] = temp;
			}

		}
		q.pop();
	}

	// for(int i=1; i<=n; i++) cout<<pt[i]<<" ";
	if(!used[konec]) cout<<0;
	else{
		cout<<d[konec]<<endl;
	}



	return 0;
}