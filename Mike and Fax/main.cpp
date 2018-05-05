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
    string s,arr[1000];
    int m,k;
    cin >>s>>k;
    if (s.length()%k==0)
        m=s.length()/k;
    else
    {
        cout<<"NO";
        return 0;
    }
    int j=0;
    for (int i=0;i+m<=s.length();i+=m)
    {
        arr[j]=s.substr(i,m);
        j++;
    }
    for (int i=0;i<j;i++)
    {
        string temp =arr[i];
        reverse(temp.begin(),temp.end());
        if (temp!=arr[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
