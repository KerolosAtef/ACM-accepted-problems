#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
#define oo  1000000000
#define N   100000
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
    int a,b,c,d ;
    cin >>a>>b>>c>>d;
    string x ;
    cin >>x;
    int l = x.length() ;
    ll sum=0;
    for (int i=0;i<l;i++)
    {
        if (x[i]=='1')
            sum+=a;
        else if (x[i]=='2')
            sum+=b;
        else if (x[i]=='3')
            sum+=c;
        else if (x[i]=='4')
            sum+=d;
    }
    cout<<sum;
    return 0;
}
