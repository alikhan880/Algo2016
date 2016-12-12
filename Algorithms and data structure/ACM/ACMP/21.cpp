#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c;
	cin>>a>>b>>c;
  int mX = max(a,max(b,c));
  int mN = min(a, min(b,c));
  
  cout<<mX - mN;
  
  return 0;
}