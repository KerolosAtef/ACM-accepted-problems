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
stack <char> s;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x;
    int n,y;
    while (1)
    {
        cin>>n;
        if (!n)return 0;
        cin>>x;
        y=x.length()/n;
        for (int i=0;i<x.length();i++)
        {
            if ((i)%y==0)
            {
                while(!s.empty())
                {
                    cout<<s.top();
                    s.pop();
                }
            }
            s.push(x[i]);
        }
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;

    }
    return 0;
}
