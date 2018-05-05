#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007

using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

string x,y;
int arr [200005];
bool solve ( ll mid)
{
    string temp = x;
    for (int i=0 ;i<=mid ;i++)
        temp [arr[i]-1]='0';
    basic_string <char> :: iterator it1 =temp.begin();
    basic_string <char> :: iterator it2 =y.begin();
    for (int i=0 ;i<x.length();i++)
    {
        if (*it1==*it2)
        {
            it1++;
            it2++;
        }
        else
            it1++;
        if (it2 ==y.end())
            return 1;
    }
    return 0;
}
int main()
{
    in ;
    cin>>x>>y ;
    for (int i=0; i< x.length();i++)
        cin >> arr [i];
    ll l =0 ,r= x.length(), mid ;
    while (l<r)
    {
        mid =(l+r+1)/2;
        if (solve (mid))
           l=mid;
        else
            r=mid-1;
    }
    if (l==0 && !solve(0))
        cout<<l;
    else
    cout<<l+1;
    return 0;
}
