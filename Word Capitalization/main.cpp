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
set <char> st;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n;
    cin>>n;
    int arr [n];
    for (int i=0;i<n;i++)
        cin >>arr[i];
    sort(arr,arr+n);
    if (!binary_search(arr,arr+n,1))
    {
        cout<<1;
        return 0;
    }
    for (int i=0;i<n-1;i++)
    {
        if (arr[i+1]-arr[i]>1)
        {
            cout<<arr[i]+1;
            return 0;
        }

    }
    cout<<arr[n-1]+1;
    return 0;
}
