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
int arr [19];
int memo [19][19];
int n ;
int solve (int i=0 , int prev=n)
{
    int op1 =-1,op2,&ret = memo [i][prev] ;
     if (i==n) return ret =0;
    if (ret) return ret ;
    if (arr[i] >arr[prev])
        op1 = solve(i+1,i)+1;
    op2=solve(i+1,prev);
    return ret = max(op1,op2);
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    cin >>n;
    for (int i=0;i<n ;i ++)
        cin >>arr[i];
    cout <<solve();

    return 0;
}
