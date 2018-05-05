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
    string x ,y ;
    int t ;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        for (int i=0;i<x.length();i++)
        {
            if (x[i]>='A'&&x[i] <='Z')
                x[i]+=32;
            if (y[i]>='A'&&y[i] <='Z')
                y[i]+=32;
        }
        //cout<<x<<" "<<y<<"\n";
        for (int i=0;i<x.length();i++)
        {
            if (x[i]!=y[i] && (((x[i]=='b' || x[i]=='p' )&& (y[i]=='b' || y[i]=='p'))  || ((x[i]=='i' || x[i]=='e' )&& (y[i]=='i' || y[i]=='e'))) )
                x[i]=y[i];
        }
        if (x==y)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
