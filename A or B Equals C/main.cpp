#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   100000

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
    int t ,n ;
    string a ,b ;
    cin>>t ;
    ll ans = 1;
    while(t--)
    {
        cin>>n>>a>>b;
        ans=1;
        for (int i=0;i<n;i++)
        {
            if (a[i]==b[i] &&a[i]=='1')
                ans*=2;
            if (a[i]!=b[i] &&(a[i]=='1' &&b[i]=='0') )
                ans=0;
            ans%=MOD;
        }
        if (ans)
            cout<<ans%MOD <<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
