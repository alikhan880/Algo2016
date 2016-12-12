#include <iostream>
#include <queue>

using namespace std;

queue <int> p1, p2;
int n, p1k, p2k, card, sr;

int main(){

	cin>>n;
	cin>>p1k;

	for(int i=0; i<p1k; i++){
		cin >> card;
		p1.push(card);
	}

	cin>>p2k;

	for(int i=0; i<p2k; i++){
		cin>>card;
		p2.push(card);
	}
	int kol = 0;
	while(!p1.empty() && !p2.empty()){
		int card1 = p1.front();
		p1.pop();
		int card2 = p2.front();
		p2.pop();

		if(kol > 1e6){
			cout<<-1;
			return 0;
		}

		if(card1>card2){
			p1.push(card2);
			p1.push(card1);
			sr++;
		}
		else{
			p2.push(card1);
			p2.push(card2);
			sr++;
		}

		kol++;
	}

	cout<<sr<<" ";

	if(p1.empty()) cout<<2;
	if(p2.empty()) cout<<1;

	return 0;
}