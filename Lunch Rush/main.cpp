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
    int n ,k ,f,t;
    cin >>n>>k ;
    int arr [n];
    for (int i=0;i<n;i++)
    {
        cin >>f>>t ;
        if (t>k)
            arr[i]=f-(t-k);
        else
            arr[i]=f;
    }
    sort(arr,arr+n);
    cout<<arr[n-1];

    return 0;
}
