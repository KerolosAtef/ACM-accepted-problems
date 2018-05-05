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
char arrchar [2][505];
int main()
{
    in ;
    int t ,n;
    cin >>t;
    while (t>0)
    {
        char check ='y';
        cin>>n;
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin >>arrchar [i][j];
            }
        }
        for (int i=0;i<1;i++)
        {
            for (int j=0;j<n;j++)
            {
                if ((arrchar [i][j]=='.' &&arrchar[i+1][j]=='.')  || (arrchar [i][j]=='#' &&arrchar[i+1][j]=='#'))
                {
                    for (int k=j+1;k<n;k++)
                    {
                        if (arrchar [i][k]=='#')
                            check='n';
                    }
                    break;
                }
                if ((arrchar[i][j]=='.' &&arrchar [i+1][j-1]=='.' ) || (arrchar[i][j]=='.' &&arrchar[i+1][j+1]=='.'))
                {
                    for (int k=j+1;k<n;k++)
                    {
                        if (arrchar [i][k]=='#')
                            check='n';
                    }
                    break;
                }
            }
        }
        if (check =='y')
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        t--;
    }
    return 0;
}

