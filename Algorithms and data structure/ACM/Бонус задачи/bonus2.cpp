#include <iostream>
#include <stack>

using namespace std; 

int main(){
	stack <pair<int, int> > st;

	int n, k;
	cin>>n;

	int a[n];
	int sum[n];
	int left[n];
	int right[n];
	int mult[n];

	for(int i = 0; i<n; i++){
		cin>>a[i];
	}

	sum[0] = a[0];

	//sum of array
	for(int i=1; i<n; i++){
		sum[i] = sum[i-1] + a[i];
	}

	
	for(int i=0; i<n; i++){
		if(st.empty()){
			st.push(make_pair(a[i],0));
			left[i] = 0;
		}
		else if(st.top().first < a[i]){
			st.push(make_pair(a[i], i));
			left[i] = i;
		}
		else{
			while(!st.empty() && st.top().first >= a[i]){
				k = st.top().second;
				st.pop();
			}
			st.push(make_pair(a[i],k));
			left[i] = k;
		}
	}

	while(!st.empty()){
		st.pop();
	}

	for(int i=n-1; i>=0; i--){
		if(st.empty()){
			st.push(make_pair(a[i],n-1));
			right[i] = n-1;
		}
		else if(st.top().first < a[i]){
			st.push(make_pair(a[i], i));
			right[i] = i;
		}
		else{
			while(!st.empty() && st.top().first >= a[i]){
				k = st.top().second;
				st.pop();
			}
			st.push(make_pair(a[i],k));
			right[i] = k;
		}
	}

	int max = 0;
	int index;
	for(int i = 0; i<n; i++){
		if(left[i] == 0){
			mult[i] = sum[right[i]] * a[i];
		}
		else{
			mult[i] = (sum[right[i]]-sum[left[i]-1]) * a[i];
		}
		cout<<mult[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		if(max<mult[i]){
			max = mult[i];
			index = i;
		}
	}

	cout<<left[index]<<" "<<right[index]<<endl;
	cout<<max<<endl;
	return 0;
}