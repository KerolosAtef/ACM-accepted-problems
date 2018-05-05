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
int arr[N];
int n ,m ;
bool cmp (int i, int j)
{
    if (i%m == j%m )
    {
        if (i %2 == j%2 &&i %2==0 )
            return j>i ;
        else if (i %2 == j%2 &&i %2==1)
            return i>j;
        else
            return (i%2) ;
    }
    else
        return (i%m)<(j%m);
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);

    while (1)
    {
        cin>>n>>m ;
        if (!n &&!m){
            cout<<n<<" "<<m<<endl;
            return 0;
        }
        for (int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,cmp);
        cout<<n<< " "<<m<<endl;
        for (int i=0;i<n;i++)
            cout<<arr[i]<<endl;
    }
    return 0;
}
