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
int arr[10005];
int n , k ,t;
bool solve (int mid)
{
    int temp;
    for (int i=0;i+mid<=n;i++)
    {
        temp=k;
        for (int j=0;j<mid;j++)
        {
            if (arr[j+i]==0)
                temp--;
        }
        if (temp>=0)
            return true;
    }
    return false;
}
int main()
{
    in ;
    cin >>t;
    while (t>0)
    {
        cin>>n>>k;
        for (int i=0;i<n;i++)
            cin>>arr[i];
        int l=0,r=n,mid;
        while (l<r)
        {
            mid = (l+r+1)/2;
            if (solve (mid))
                l=mid;
            else
                r=mid-1;
        }
        cout<<l<<endl;
        t--;
    }
    return 0;
}
