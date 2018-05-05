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
int arr [150];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    string x ;
    int k,sum=0 ;
    cin >> x >> k;
    int l = x.length();
    for (int i=97 ;i<123;i++)
        cin >>arr[i];
    for (int i =0 ;i<l;i++)
        sum += (i+1)*arr[x[i]];
    sort(arr,arr+150,greater <int > ());
    for (int i=l+1 ;i<=l+k;i++)
        sum+=i*arr[0];
    cout<<sum ;
    return 0;
}
