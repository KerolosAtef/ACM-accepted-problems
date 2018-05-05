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
vector <char > v ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x ,t ;
    int st,en ;
    cin>>x>>t;
    int lx =x.length();
    for (int i=0;i<lx;i++)
        v.push_back(x[i]);

    for (int j=1;j<lx;j++)
    {
        st=0;en=0;
    for (int i=0;i<lx;i++)
    {
        if (v[i]!=t[i])
        {
            st=i;
            break ;
        }
    }
    for (int i=lx;~i;i--)
    {
        if (v[i]!=t[i])
        {
            en=i;
            break ;
        }
    }
        bool c =true;
        char a =v[en] ;
        v.erase(v.begin()+en);
        v.insert(v.begin()+st,a);
       /* for (int i=0;i<v.size();i++)
            cout<<v[i];*/
        for (int i=st;i<en;i++)
        {
            if (v[i]!=t[i])
                c=false;
        }
        if (c)
        {
            cout<<j;
            return 0;
        }
    }
    cout<<-1 ;
    return 0;
}
