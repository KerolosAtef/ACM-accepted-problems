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
    int n ;
    bool flag =true ,flag2=true;
    cin >>n ;
    int arr [n];
    int maxi=0,mini=1000000,index_mini=0,index_maxi=0;
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
        if (arr[i]>maxi)
        {
            maxi=arr[i];
        }
        if (arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    for (int i=0;i<n-1;i++)
    {
        if (arr [i]==maxi && arr[i+1]==mini)
        {
            index_maxi =i;
            index_mini = i+1;
        }
        if (arr[i+1]<arr[i])
            flag2=false;
    }
    for (int i=0;i<index_maxi;i++)
    {
        if (arr [i+1]<arr[i])
            flag =false ;
    }
    for (int i=index_mini;i<n-1;i++)
    {
        if (arr [i+1]<arr[i] || arr[i+1] >arr[0])
            flag =false ;
    }
    if ( mini==maxi || flag2)
        cout<<0;
    else if (index_mini - index_maxi == 1 && flag )
        cout<<n-index_mini;
    else
        cout<< -1;

    return 0;
}
