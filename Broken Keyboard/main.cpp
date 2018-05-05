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
stack <char> home,temp ;
queue <char> theEnd;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x;
    while (cin>>x)
    {
        bool flag=true;
        for (int i=0;i<x.length();i++)
        {
            if (x[i]=='['){
                flag=true;
                while (!temp.empty())
                {
                    home.push(temp.top());
                    temp.pop();
                }
                continue;
            }
            else if (x[i]==']'){
                flag=false;
                continue;
            }
            if (flag){
                temp.push(x[i]);
            }
            else
                theEnd.push(x[i]);
        }
        while (!temp.empty())
        {
            home.push(temp.top());
            temp.pop();
        }
        while (!home.empty())
        {
            cout<<home.top();
            home.pop();
        }
        while (!theEnd.empty())
        {
            cout<<theEnd.front();
            theEnd.pop();
        }
        cout<<endl;
    }
    return 0;
}
