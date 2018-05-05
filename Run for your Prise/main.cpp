#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   1000000

using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
ll n ,a;;
vi v ;
bool solve ( int mid )
{
    for (int i=mid+1;i<=(1000000-mid);i++)
    {
        if (v[i])
            return false;
    }
    return true;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    v.resize(1000000);
    //fill(v.begin(),v.end(),0);
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        v[a]=a;
    }
    int l =1,r=1000000,mid ;
    while (l<r)
    {
        mid=(l+r)/2;
        //cout<<mid<<endl;
        if (solve (mid))
            r=mid;
        else
            l=mid+1;
    }
    cout<<l-1;

    return 0;
}
