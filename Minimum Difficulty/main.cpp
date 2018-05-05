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
vi v ;
int main()
{
    in ;
    int n ;
    cin >>n ;
    v.resize(n);
    int maxarr[n-2];
    for (int i=0;i<n;i++)
        cin>>v[i];
    for (int i=1;i<n-1;i++)
    {
        int maxi=0;
        int temp =v[i] ,temp2;
        v.erase (v.begin()+i);
        for (int j=0;j<n-1;j++)
        {
            temp2 = v[j+1]-v[j];
            if (temp2>maxi)
                maxi =temp2;
        }
        maxarr [i-1]=maxi;
        v.insert (v.begin()+i ,temp);
    }
    sort(maxarr ,maxarr+(n-2));
    cout<<maxarr [0];
    return 0;
}
