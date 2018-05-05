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
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    string x ,y ;
    cin >>x>>y;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]>=65 &&x[i]<=90)
            x[i]+=32;
    }
    for (int i=0;i<y.length();i++)
    {
        if (y[i]>=65 &&y[i]<=90)
            y[i]+=32;
    }
    if (x>y)
        cout<<1;
    else if(x<y)
        cout<<-1;
    else
        cout<<0;
    return 0;
}
