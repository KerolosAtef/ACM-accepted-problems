#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
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
set <char> st ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    string x;
    int k ;
    cin >>x>>k;
    int l = x.length();
    for (int  i=0 ;i<l;i++)
    {
       st.insert(x[i]);
    }
    int m = l-st.size();
    int n =k - st.size();
    if (n<0)
        cout<<0;
    else if (n<=m)
        cout<< n;
    else
        cout<<"impossible";

    return 0;
}
