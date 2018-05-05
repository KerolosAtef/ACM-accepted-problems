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

int main()
{
    in ;
    int n , a;
    cin>>n>>a;
    double x, y ;
    x= (double )(n-2)*180 /n;
    y=(double)(180-x)/2;
    double mini=abs(x-a);
    while (x>=y)
    {
        x-= y;
        if (abs(x-a)<mini)
            mini= abs (x-a);
    }
    cout<<mini;
    return 0;
}
