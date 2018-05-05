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
int memo [1000][1000];
string x, y ;

int solve (int i =0  , int j =0)
{
    b
    if (i== x.length()||j== y.length())
        return 0;
    int op1 , op2 , op3 ,&ret =memo [i][j];
    if (~ret )return ret ;
    if (x[i]==y[j]) return ret = solve(i+1,j+1)+1;
    op2 =solve(i+1,j);
    op3 = solve(i,j+1);
    return ret =max(op2,op3);
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    memset(memo ,-1 , sizeof memo);
    cin >>x>>y ;
    cout<<solve();

    return 0;
}
