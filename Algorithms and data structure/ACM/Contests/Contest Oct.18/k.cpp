#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;

string inp, t;
double res = 0;
double speed = 0;
double h, m, s, hst, mst, sst;
// cout.precision(2);
vector<double> h1, m1, s1;
int main(){

	stringstream ss;
	while(getline(cin, inp)){
		t = "";
		for(int i=0; i<8; i++){
			t+=inp[i];
		}

		if(inp.size() == 8){
			ss<<t[0]<<t[1];
			ss>>h;
			ss.clear();
			ss<<t[3]<<t[4];
			ss>>m;
			ss.clear();
			ss<<t[6]<<t[7];
			ss>>s;
			ss.clear();
			// cout<<h<<" "<<m<<" "<<s<<endl;
			// cout<<s-sst<<" "<<m-mst<<" "<<h-hst<<endl;
			double time = (s-sst)/3600 + (m-mst)/60 + (h-hst);
			// cout<<time<<" "<<speed<<endl;
			res = time * speed;
			// results.push_back(res);
			cout<<inp<<" ";
			cout<<fixed<<setprecision(2)<<res<<" "<<"km"<<endl;

		}

		else{
			
			ss<<t[0]<<t[1];
			ss>>hst;
			ss.clear();
			ss<<t[3]<<t[4];
			ss>>mst;
			ss.clear();
			ss<<t[6]<<t[7];
			ss>>sst;
			ss.clear();
			ss<<inp.substr(9);
			h1.push_back(hst);
			m1.push_back(mst);
			s1.push_back(sst);
			// speeds.push_back(speed);
			ss>>speed;
			ss.clear();

			for(int i=0; i<h1.size(); i++){
				cout<<h1[i]<<" "<<m1[i]<<" "<<s1[i]<<endl;
			}
			double h2 = hst - h1[h1.size()-1];
			double m2 = mst = m1[m1.size()-1];
			double s2 = sst = s1[s1.size()-1];
			cout<<h2<<" "<<m2<<" "<<s2<<endl;

			double time = s2/3600 + m2/60 + h2;
			cout<<time<<" "<<speed<<endl;
			res = time*speed;
			cout<<res<<endl;
			
			// cout<<hst<<" "<<mst<<" "<<sst<<" "<<speed<<endl;


		}
	}



	return 0;
}