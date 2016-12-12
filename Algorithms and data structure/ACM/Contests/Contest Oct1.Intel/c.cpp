#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;



int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int n;
	string date;
	cin>>n>>date;
	
	if(n == 24){
		if(date[0] - 48 >= 2 && date[1] - 48 > 3 && date[3]-48<= 5 && date[4]-48 <= 9){
			date[0] = '0';
		}
		if(date[0] - 48 <= 2 && date[1]-48<=3 && date[3] - 48 > 5){
			date[3] = '0';
		}
		if(date[0]-48>=2 && date[1]-48 >3 && date[3] - 48 > 5){
			date[0] = '0';
			date[3] = '0';
		}
	}
	

	else if(n==12){
		if(date[0] - 48 >= 1 && date[1] - 48 > 1 && date[3] - 48 <=5 && date[4]-48<=9){
			date[0] = '0';
		}
		if(date[0] - 48 <=1 && date[1]-48<=1 && date[3] - 48 > 5){
			date[3] = '0';
		}
		if(date[0] - 48 >= 1 && date[1] - 48 > 1 && date[3] - 48 > 5){
			date[0] = '0';
			date[3] = '0';
		}
	}

	for(int i=0; i<date.size(); i++){
		cout<<date[i];
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}