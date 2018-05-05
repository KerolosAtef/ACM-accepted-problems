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
    //memset(memo,-1,sizeof memo);
    ll n ,i,k,num;
    cin >> n>>k ;
    if (n==1&&k==1 ||k==0)
    {
        cout<<0<<" "<<0 ;
        return 0;
    }
    int temp=n-2;
    if (temp%3==0)
        num=(n+1)/3;
    else if (temp%3==1)
        num=(n)/3;
    else if (temp%3==2)
        num=(n-1)/3;
    //cout<<num ;
    int ans ;
    int m = (3*num)-1;
    if (k>=num)
    {
        ans =2*num;
        int t =k-num;
        if (n==m)
            ans--;
        if (n-m==2 &&k!=num)
        {
            t--;
        }
        ans-=t ;
    }
    else
    {
        ans=2*k;
    }
    if (k==n)
        cout<<0<<" "<<ans;
    else
        cout<<1<<" "<<ans;

    return 0;
}
