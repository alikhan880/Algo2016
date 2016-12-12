#include <iostream>
#include <cmath>

using namespace std;
int main(){
  int n, pow=1;
  cin>>n;
  for(int i=0; i<14; i++){
  	if(pow == n){
  		cout<<"YES";
  		return 0;
  	}
  	pow*=2;
  }
  cout<<"NO";
  return 0;
}