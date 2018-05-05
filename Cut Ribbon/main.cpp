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
int n , a, b, c ;
int memo [4005];
int solve (int m= n )
{
    int op1=0 , op2=0 ,op3=0 ,&ret =memo [m];
    if (m<0) return -1e9 ;
    if (m==0)return ret = 0;
    if (ret )return ret ;
        op1=solve(m-a)+1;
        op2=solve(m-b)+1;
        op3=solve(m-c)+1;
    return ret = max (op1 , max (op2,op3));
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    cin >>n >>a>>b>>c;
    cout<<solve();

    return 0;
}
