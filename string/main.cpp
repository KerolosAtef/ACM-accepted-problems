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
set <char> st ;
set <int> st_max ;
vi v ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n ;
    string x ;
    cin >>n>>x;
    int maxi=0;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]>='a' && x[i]<='z')
        {
            st.insert(x[i]);
        }
        else
        {
            if (maxi < st.size())
                maxi=st.size();
            st.clear();
        }
    }
    if (maxi < st.size())
        maxi=st.size();
    cout<<maxi;
    return 0;
}
