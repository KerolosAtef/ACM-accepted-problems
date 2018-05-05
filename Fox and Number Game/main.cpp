#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
/***
.
.
.
.
kerolos atef
.
.
.
.
***/
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
    int n ,sum=0,ch=1000;
    cin >>n;
    int arr [n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    while (ch--)
    {
        sort(arr,arr+n);
        for (int i=n-1;i>0;i--)
        {
            if (arr[i]>arr[i-1])
                arr[i]-=arr[i-1];
        }
    }
    for (int i=0;i<n;i++)
        sum+=arr[i];
    cout<<sum;
    return 0;
}
