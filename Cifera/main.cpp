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
    ll n , k;
    cin>>n>>k;
    int count=0;
    while(k%n==0)
    {
        k=k/n;
        count++;
    }
    if (k==1)
        cout<<"YES"<<endl<<count-1;
    else
        cout<<"NO";

    return 0;
}
