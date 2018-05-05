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
vector <ll> v ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x;
    cin>>x;
    int lx=x.length();
    ll sum=0;
    for (int i=lx-1;i>=0;i-=3)
    {
        sum=0;
        for (int j=0;j<3;j++)
        {
            if (x[i-j]=='1' &&i-j>=0)
                sum+=pow(2,j);
        }
        v.push_back(sum);
    }
    reverse(v.begin(),v.end());
    for (int i=0;i<v.size();i++)
        cout<<v[i];

    return 0;
}
