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
int n ,arr[1000] ,ans,cnt;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    for (int i=0;i<n;i++)
    {
        cnt=0;
        for (int j=i;j<n-1;j++)
        {
            if (arr[j]>=arr[j+1])
                cnt++;
            else
                break;
        }
        for (int j=i;j>0;j--)
        {
            if (arr[j]>=arr[j-1])
                cnt++;
            else
                break;
        }
        cnt++;
        ans=max(ans,cnt);
    }
    cout<<ans;
    return 0;
}
