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
int arr[20];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n;
    while (cin>>n)
    {
        if (n==0)
            return 0;
    int maxi =0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]>maxi)
            maxi=arr[i];
    }
    //cout<<"maxi"<<maxi ;
    char arr2 [maxi][n];
    memset(arr2,'*',sizeof arr2);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<maxi-arr[i];j++)
        {
            arr2 [j][i]='.';
        }
    }
    for (int i=0;i<maxi;i++)
    {
        for (int j=0;j<n;j++)
        {
           cout<<arr2[i][j];
        }
        cout<<endl;
    }
    }
    return 0;
}
