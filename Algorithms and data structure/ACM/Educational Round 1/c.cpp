
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


const long double pi = acos(-1.0);

struct Point
{
    long double k;
    int id;
    bool operator < (const Point &a) const
    {
        return k < a.k;
    }
}p[100100];

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        p[i].k = atan2(y,x);
        p[i].id = i + 1;
    }

    sort(p,p + n);
    long double ans;

    if(p[0].k < 0) ans = p[0].k + 2 * pi - p[n - 1].k;
    else ans = p[n - 1].k - p[0].k;
    int a1 = p[n - 1].id;
    int a2 = p[0].id;
    
    for(int i = 1; i < n; i++)
    {
        long double tp = p[i].k - p[i - 1].k;
        if(tp  < ans)
        {
            ans = tp;
            a1 = p[i].id;
            a2 = p[i - 1].id;
        }
    }
    
    cout<<a1<<" "<<a2<<endl;
    return 0;
}