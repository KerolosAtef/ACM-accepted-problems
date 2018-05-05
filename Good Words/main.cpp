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
    int  t;
    cin>>t;
    string x, y,temp,op1,op2,op3,op4;
    while(t--)
    {
        cin>>x>>y;
        temp=y;
        op1=temp.erase(3,1);
        cout<<op1<<endl;
        temp=y;
        op2=temp.erase(2,1);
        cout<<op2<<endl;
        temp=y;
        op3=temp.erase(1,1);
        cout<<op3<<endl;
        temp=y;
        op4=temp.erase(0,1);
        cout<<op4<<endl;
        int m=0;
        for (int i=0;i<x.length();i++)
        {
            if (x[i]==y[0])
            {
                for (int j=0;j<3;j++)
                {
                    if ()
                }
            }


        }
    }
    return 0;
}
