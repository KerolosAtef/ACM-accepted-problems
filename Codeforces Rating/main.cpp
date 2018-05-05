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
    int t, f ,n,a,sum;
    cin>>t;
    while (t--)
    {
        sum=1500;
        cin>>n>>f;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }
        if (sum==f)
            cout<<"Correct";
        else
            cout<<"Bug";
    }
    return 0;
}
