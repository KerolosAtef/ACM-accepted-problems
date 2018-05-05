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
    int test ,n;
    string x;
    char check='T' ;
    cin >>test;
    while (test>0)
    {
        int t=0 ,h=0;
        bool flag =false ;
        cin >>n>>x;
        for (int i=0;i<n;i++)
        {
            if (x[i]=='H')
                h++;
            if (x[i]=='T')
                t++;
            if (x[i]!='.')
            {
                if (x[i]!=check)
                    check=x[i];
                else
                    flag=true ;
            }
        }
        if (h==t && flag==false)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;
        check ='T';
        test--;
    }
    return 0;
}
