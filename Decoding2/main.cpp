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
    string x,y="" ;
    int n ;
    cin>>n>>x;
    for (int i=x.length()-1;i>=0;i--)
    {
        if (i&1)
            y.push_back(x[i]);
    }
    for (int i=0;i<x.length();i++)
        if(i%2==0)
            y.push_back(x[i]);
    if (n&1)
        cout<<y;
    else
    {
        reverse(y.begin(),y.end());
        cout<<y;
    }
    return 0;
}
