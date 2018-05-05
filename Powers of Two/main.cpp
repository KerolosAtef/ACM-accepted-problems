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
    int arr [n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    int count =0;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
           if( binary_search(p,p+60,arr[i]+arr[j]))
            count++;
        }
    }
    cout<<count ;

    return 0;
}
