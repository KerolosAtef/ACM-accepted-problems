#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   100000

using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x ,temp;
    int a , b;
    cin>>x>>a>>b;
    int arr [x.length()];
    for (int i=0;i<x.length();i++)
    {
        arr[i]=x[i]-'0';
    }
    temp=x;
    fill(arr,arr+x.length(),max(a,b ));
    for (int i=0;i<x.length();i++)
    {
        cout<<arr[i];
    }

    return 0;
}
