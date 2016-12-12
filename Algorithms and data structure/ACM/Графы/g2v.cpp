#include <iostream>
#include <vector>

using namespace std;

vector <int> a[10];
int x, y;

void make_graph(int x, int y){
	int ver, ver2;
	for(int i=0; i<y; i++){
		cin>>ver>>ver2;
		a[ver].push_back(ver2);
		a[ver2].push_back(ver);
	}
}

int main(){
	cin>>x>>y;
	make_graph(x,y);

	for(int i=0; i<x; i++){
		cout<<"vershina " + i<<endl;
		for(int j=0; j<a[i].size(); i++){
			cout<<a[i][j]<<" ";
		}

		cout<<endl;
	}

	return 0;
}