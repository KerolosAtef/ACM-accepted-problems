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
    int t,n;
    cin>>t;
    string x ;
    while (t--)
    {
        string app ="";
        cin>>n ;
        for (int i=0;i<n;i++)
        {
            cin>>x;
            app.push_back(x[0]);
        }
        app.push_back('*');
        int cnt =0;
        for (int i=0;i<app.length()-1;i++)
        {
            if (app[i]!=app[i+1])
            {
                if (cnt)
                    cout<<app[i]<<cnt+1;
                else
                    cout<<app[i];
                cnt=0;
            }
            else
            {
                cnt++;
            }
        }
        cout<<endl;
    }
    return 0;
}
