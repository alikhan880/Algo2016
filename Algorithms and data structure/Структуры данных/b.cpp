#include <iostream>
#include <string>

using namespace std;
int main(){
	int stack[100];
	int value;
	int pointer = 0;
	string choice;
	while(1!=0){
		
		cin>>choice;
		
		if(choice == "push"){
				cin>>value;
				stack[pointer] = value;
				pointer++;
				cout<<"ok"<<endl;
		}
		
		else if(choice == "pop"){

				if(pointer <= 0){
					cout<<"error"<<endl;
				}

				else{
				cout<<stack[pointer-1]<<endl;
				pointer--;
				}
		}
		
		else if(choice == "back"){
				if(pointer <= 0){
					cout<<"error"<<endl;
				}
				else{
				cout<<stack[pointer-1]<<endl;
				}
		}
		
		else if(choice == "size"){
				cout<<pointer<<endl;
		}

		else if(choice == "clear"){
				pointer = 0;
				cout<<"ok"<<endl;
		}
		
		else if(choice == "exit"){
				cout<<"bye"<<endl;
				return 0;
		}

		else{
			continue;
		}
	}

	return 0;
}