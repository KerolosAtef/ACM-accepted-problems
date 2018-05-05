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
//1 white
//2 blue
//3 red
ll memo [50][5][5];
int n ;
vector <ll> v;
ll flags (int i=0 ,int prev=0 ,int prev2=0)
{
    if (i==n-1) return 1;
    ll &ret =memo[i][prev][prev2];
    if (~ret)return ret;
    ret=0;
    if (prev!=1 && !(prev==2 &&prev2 ==1))
        ret+=flags(i+1,1,prev);
    if (prev!=3 && !(prev==2 &&prev2 ==3))
        ret+=flags(i+1,3,prev);
    if (prev!=2 && prev!=0)
        ret+=flags(i+1,2,prev);
    return ret ;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    memset(memo,-1,sizeof memo );
    cin>>n;
    if (n==1)
        cout<<2<<endl;
    else
        cout<<flags()<<endl;
    return 0;
}
