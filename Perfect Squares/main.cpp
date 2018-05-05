#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   1000000

using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
ll perfect [1005];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    for (int i=0;i<=1005;i++)
        perfect[i]=i*i;
    sort(perfect,perfect+1005);
    int n ,a,maxi=-1*oo;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        if (binary_search(perfect,perfect+1005,a))
            continue;
        if (a> maxi )
            maxi=a;
    }
    printf("%d\n",maxi);
    return 0;
}
