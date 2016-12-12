#include <iostream>
#include <stack>

using namespace std;
int main(){
	stack< pair<int, int> > st;

	int n, k;
	cin>>n;
	int a[n];
	int b[n];

	for (int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		if(st.empty()){
			st.push(make_pair(a[i], 0));
			b[i] = 0;
		}
		else if(st.top().first > a[i]){
					st.push(make_pair(a[i], i));
					b[i] = i;
		}
		
		else{
			while(!st.empty() && st.top().first < a[i]){
					k = st.top().second;
					st.pop();
			}
					st.push(make_pair(a[i],k));
					b[i] = st.top().second;
		}
	}

	for(int i=0; i<n; i++){
		cout<< a[i] << " ";
	}
	cout<<endl;

	for(int i=0; i<n; i++){
		cout<<b[i]<<" ";
	}

	return 0;
}