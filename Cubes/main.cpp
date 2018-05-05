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
int n ;
bool solve (int i ,int j)
{
    ll x= i*i*i;
    ll y= j*j*j;
    return ((x-y)==n)?1:0;
}
vii v ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    while (1)
    {
        cin >>n ;
        if (n ==0)
            return 0;
        for (int i=0;i<100;i++)
        {
            for (int j=0;j<100;j++)
            {
                if (solve(i,j))
                    v.push_back(make_pair(j,i));
            }
        }
        sort(v.begin(),v.end());
        if (v.size()==0)
            cout<<"No solution"<<endl;
        else
            cout<<v[0].second <<" "<<v[0].first<<endl;
        v.clear();

    }
    return 0;
}
