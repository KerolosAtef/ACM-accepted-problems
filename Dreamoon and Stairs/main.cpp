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
    int n,m,moves=0;
    cin>>n>>m ;
    if (m>n)
        cout<<-1;
    else
    {
        if (n&1){
            n--;
            moves=1+(n/2);
        }
        else
            moves=n/2;
        while (moves %m!=0 )
        {
            moves++;
        }
        cout<<moves ;
    }
    return 0;
}
