#include <iostream>
using namespace std;

char a[10][10];
int cW, cB;
int main(){
	// freopen("i.in", "r", stdin);
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin>>a[i][j];
		}
	}

	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(a[i][j]>64 && a[i][j]<91){
				if(a[i][j] == 'Q') cW+=9;
				else if(a[i][j] == 'R') cW+=5;
				else if(a[i][j] == 'B' || a[i][j] == 'N') cW+=3;
				else if(a[i][j] == 'P') cW+=1;
			}
			else if(a[i][j]>96 && a[i][j]<123){
				if(a[i][j] == 'q') cB+=9;
				else if(a[i][j] == 'r') cB+=5;
				else if(a[i][j] == 'b' || a[i][j] == 'n') cB+=3;
				else if(a[i][j] == 'p') cB+=1;
			}
		}
	}	


	if(cW > cB){
		cout<<"White";
	}
	else if(cW < cB){
		cout<<"Black";
	}
	else{
		cout<<"Draw";
	}

	// fclose(stdin);
	return 0;
}