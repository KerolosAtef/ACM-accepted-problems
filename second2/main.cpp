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
vector<int> v2;
vector<string>v;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n ,y;
    string x;
    cin>>x;
    v.resize(100000);
    int a =atoi(x.c_str());
    while (next_permutation(x.begin(),x.end()))
    {
        v.push_back(x);
    }
    for (int i=0;i<v.size();i++)
    {
        y=atoi(v[i].c_str());
        v2.push_back(y);
    }
    sort(v2.begin(),v2.end());
    cout<<*upper_bound(v2.begin(),v2.end(),a);
    return 0;
}
