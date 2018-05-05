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
    ll n ,a;
    cin >>n ;
    ll arr[n];
    ll arr2 [n-1];
    ll arr3[n-2];
    ll arr4 [n-1];
    for (int i=0;i<n;i++)
        cin >>arr[i];
    sort(arr,arr+n);
    for (int i=0;i<n-1;i++)
        cin >>arr2[i];
    sort(arr2,arr2+n-1);
    for (int i=0;i<n-1;i++)
        arr4[i]=arr2[i];
    sort(arr4,arr4+n-1);
    for (int i=0;i<n-2;i++)
        cin >>arr3[i];
    sort(arr3,arr3+n-2);
    for (int i=0;i<n;i++)
    {
        if (! binary_search(arr2,arr2+n-1,arr[i]))
            cout<< arr[i]<<endl;
        else
            *lower_bound(arr2,arr2+n-1,arr[i])=0;
    }
    for (int i=0;i<n-1;i++)
    {
        if (! binary_search(arr3,arr3+n-2,arr4[i]))
            cout<< arr4[i];
        else
            *lower_bound(arr3,arr3+n-2,arr[i])=0;
    }
    return 0;
}
