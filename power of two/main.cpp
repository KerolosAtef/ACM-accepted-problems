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
ll p [60];
ll power_of_two ()
{
    for (int i=0;i<60;i++)
    {
        p [i]=pow(2 , i);
    }
}
int main()
{
    in ;
    power_of_two();
    int n;
    cin>>n ;
    ll arr [n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    int count =0;
    sort (arr,arr+n);
    for (int j=0;j<60;j++){
    for (int i=0;i<n-1;i++)
    {
        if (p[j]>arr[i])
            if (binary_search(arr,arr+n,p[j]-arr[i])&&p[j]-arr[i]!=arr[i]){
                count++;
                int index =*
                if (p[j]-arr[i] <n)
                    arr[p[j]-arr[i]]=0;

            }
    }
    }
    cout<<count ;

    return 0;
}
