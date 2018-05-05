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
int arr [1000000];
int main()
{
    in ;
    int y ,k ,n ;
    cin>>y>>k>>n;
    int j=0;
    bool flag =false;
    while ((j+1)*k <=n)
    {
        arr[j]=(j+1)*k;
        j++;
    }
    for (int i=0;i<j;i++)
    {
        if (arr[i]>y)
        {
            cout<<arr[i]-y<<" ";
            flag =true ;
        }
    }
    if (flag ==false)
        cout<<-1 ;
    return 0;
}
