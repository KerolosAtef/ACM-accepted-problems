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

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    string x;
    getline(cin,x);
    set <char> st ;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]==' ')
            continue ;
        else
            st.insert(x[i]);
    }
    cout<<st.size();

    return 0;
}
