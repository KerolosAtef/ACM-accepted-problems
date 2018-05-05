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
    int t ;
    cin>>t ;
    string x;
    for (int i=0;i<t;i++)
    {
        cin>>x ;
        bool f = 1;
        while (f )
        {
            f=0;
            for (int j=0;j<x.length()-2;j++)
            {
                if (x.length()<3){f=0; break ;}
                if (x[j]=='1' &&x[j+1]=='0'&&x[j+2]=='0')
                {
                    f=1;
                    x.erase(j,3);
                    j-=2;
                }
            }
        }
        if (x.length()==0)
            printf("Case %d: yes\n",i+1);
        else
            printf("Case %d: no\n",i+1);
    }
    return 0;
}
