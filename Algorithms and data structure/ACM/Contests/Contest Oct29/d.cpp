#include <iostream>
#include <vector>

using namespace std;

vector <int> v;
int n, t, c, q;
int k;

int main(){
	cin>>n>>t>>c;

	for(int i=0; i<n; i++){
		cin>>q;
		if(q>t){
			k++;	
		}
		v.push_back(q);
	}
	cout<<"elements"<<" ";
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	int kol;
	if(n<=c){
		kol = n-c;
	}
	else{
		kol = n-c+1;
	}
	cout<<"kol "<<kol<<endl;
	int ost = k*c;
	cout<<"ost "<<ost<<endl;
	cout<<"k"<<" "<<k<<endl;
	cout<<"raznost "<<kol-ost;
	return 0;


}