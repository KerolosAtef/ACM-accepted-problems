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
    cin>>n;
    ii arr [n];
    bool a =0,b=0,c=0,d=0 ;
    int count =0;
    for (int i=0;i<n;i++)
        cin>>arr[i].first >>arr[i].second;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
                continue ;
            if (arr[j].first>arr[i].first &&arr[j].second == arr[i].second )
                a=1;
            if (arr[j].first<arr[i].first &&arr[j].second == arr[i].second )
                b=1;
            if (arr[j].first==arr[i].first &&arr[j].second < arr[i].second )
                c=1;
            if (arr[j].first==arr[i].first &&arr[j].second > arr[i].second )
                d=1;
        }
        if (a && b&& c&&d)
            count++;
        a=0;b=0;c=0;d=0;
    }
    cout<<count ;
    return 0;
}
