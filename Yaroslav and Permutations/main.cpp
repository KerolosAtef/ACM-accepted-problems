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

int fre [1005];
int main()
{
    in ;
    int n ;
    cin >>n ;
    int arr [n];
    int count =0 ,count1=0;
    for (int i=0;i<n;i++)
        cin >>arr[i];
    sort (arr ,arr+n);
    for (int i=0;i<n;i++)
        fre[arr[i]]++;
    sort(fre ,fre +1005);
    if (n- fre [1004]>=fre[1004]-1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
