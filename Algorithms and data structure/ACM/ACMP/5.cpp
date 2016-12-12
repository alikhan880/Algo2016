#include <iostream>
#include <vector>
using namespace std;


vector<int> ch, tr;

int main(){
	int n, c;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>c;

		if(c%2 == 0){
			ch.push_back(c);
		}
		else{
			tr.push_back(c);
		}
	}

	for(int i=0; i<tr.size(); i++){
		cout<<tr[i]<<" ";
	}

	cout<<endl;

	for(int i=0; i<ch.size(); i++){
		cout<<ch[i]<<" ";
	}

	cout<<endl;

	if(ch.size()>=tr.size()){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

	return 0;
}