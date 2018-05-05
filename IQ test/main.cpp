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
    int n ;
    cin >>n ;
    int arr [n];
    int even=0 , odd=0;
    int temp1,temp2;
    for (int i=0;i<n;i++)
    {
        cin >>arr [i];
        if (arr[i]%2==0)
        {
            even++;
            temp1=i;
        }
        else
        {
            odd++;
            temp2=i;
        }
    }
    if(odd==1)
        cout<<temp2+1;
    else
        cout<<temp1+1;

    return 0;
}
