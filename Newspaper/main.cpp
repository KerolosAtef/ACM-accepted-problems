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
int fre [260];
vector <double> vans;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int t,n ,v,m;
    double ans ;
    char a ;
    string x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for (int i=0;i<n;i++)
        {
            cin>>a>>v;
            fre [a]=v;
        }
        cin>>m;
        cin.ignore();
        ans=0;
        for (int i=0;i<m;i++)
        {
            getline(cin,x);
            for (int j=0;j<x.length();j++)
                ans+=fre [x[j]];
        }
        ans/=100;
        printf("%.2f$\n",ans);
        memset(fre,0,sizeof fre);
    }
    return 0;
}
