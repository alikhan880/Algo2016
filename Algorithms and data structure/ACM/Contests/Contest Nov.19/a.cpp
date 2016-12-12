#include <iostream>
#include <vector>

#define lol long long

using namespace std;

int t;
lol n;
vector<lol> v;

bool step(lol w){
	bool check = false;
	int tmp = 1;
	if(w == 1) return true;
	for(int i=1; i<31; i++){
		tmp*=2;
		if(tmp == w){
			check = true;
			break;
		}
		else if(tmp>w) break;
	}

	return check;
}

// void zapoln(){
// 	for(lol i=1; i<=1000; i++){
// 		if(step(i)){
// 			// v[i] = -1*i;
// 		}
// 	}
// }

int main(){

	cin>>t;
	// zapoln();
	for(int i=0; i<t; i++){
		cin>>n;
		for(int i=1; i<=n; i++){
			cout<<v[i]<<" ";	
		}
	}


	return 0;
}