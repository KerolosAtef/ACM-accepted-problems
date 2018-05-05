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
stack <char> s1 ,s2 ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int t ;
    cin>>t;
    string x ;
    for (int i=0;i<t;i++)
    {
        while (!s1.empty())
            s1.pop();
        while (!s2.empty())
            s2.pop();
        cin>>x;
        for (int j=0;j<x.length();j++)
            s1.push(x[j]);
        while (!s1.empty())
        {
            if (s1.top()=='1' )
            {
                bool f1=false ,f2=false ;
                char temp1='5' ,temp2='5' ;
                if (s2.size()!=0 && s2.top()=='0')
                {
                    f1=true;
                    temp1=s2.top();
                    s2.pop();
                }
                if (!f1 &&s2.size()!=0){
                    temp1=s2.top();
                    s2.pop();

                }
                if (s2.size()!=0 && s2.top()=='0')
                {
                    f2=true;
                    temp2=s2.top();
                    s2.pop();
                }
                if (!f2 &&s2.size()!=0){
                    temp2=s2.top();
                    s2.pop();
                }
                if (f1 &&f2)
                {
                    s1.pop();
                    while (!s2.empty())
                    {
                        s1.push(s2.top());
                        s2.pop();
                    }
                }
                else {
                s2.push(temp2);
                s2.push(temp1);
                s2.push(s1.top());
                s1.pop();
                }
            }
            else
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout<<s2.size()<<endl;
        if (s2.size()==0)
            printf("Case %d: yes\n",i+1);
        else
            printf("Case %d: no\n",i+1);
    }
    return 0;
}
