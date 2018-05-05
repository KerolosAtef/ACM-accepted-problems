#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
/***
.
.
.
.
kerolos atef
.
.
.
.
***/
using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
double x,y,c,ans =0;
bool solve (double mid )
{
    double A =sqrt((x*x)-(mid*mid));
    double B =sqrt((y*y)-(mid*mid));
    if ((1/A)+(1/B)<=(1/c))
        return true;
    else
        return false ;
}
int main()
{
    in ;
    while (cin >>x>>y>>c)
    {
        double l =0 , r= 1000000000 ,mid ;
        for (int i=0;i<1000;i++)
        {
            mid = (l+r)/2;
            if (solve( mid ))
                l=mid ;
            else
                r= mid ;
        }
        cout.precision(3);
        cout<<fixed<<l<<endl;
    }
    return 0;
}
