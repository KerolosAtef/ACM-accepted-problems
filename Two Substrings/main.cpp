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
vi v1,v2;
int main()
{
    in ;
    string s;
    int m=0;
    cin>>s;
    for (int i=0;i<s.length()-1;i++)
    {
        if (s[i]=='A' &&s[i+1]=='B')
        {
            m=i+2;
            break ;
        }
    }
    if (m!=0)
    {
        for (int i=m;i<s.length()-1;i++)
        {
            if (s[i]=='B' &&s[i+1]=='A')
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    m=0;
    for (int i=0;i<s.length()-1;i++)
    {
        if (s[i]=='B' &&s[i+1]=='A')
        {
            m=i+2;
            break ;
        }
    }
    if (m!=0)
    {
        for (int i=m;i<s.length()-1;i++)
        {
            if (s[i]=='A' &&s[i+1]=='B')
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";


    return 0;
}
