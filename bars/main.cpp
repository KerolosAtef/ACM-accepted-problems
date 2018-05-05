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
int t ,n,p,arr[N+5],temp,sum=0;
bool f =false;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    cin>>t;
    while(t--)
    {
        f=false;
        cin>>n>>p ;
        for (int i=0;i<p;i++)
            cin>>arr[i];
        for (int i=0;i<pow(2,p);i++)
        {
            sum=0;
            temp=i;
            for (int j=0;j<p;j++)
            {
                if (!(temp&1))
                   sum+=arr[j];
                temp=temp>>1;
            }
            if (sum==n)
                f=true;
        }
        if (f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
