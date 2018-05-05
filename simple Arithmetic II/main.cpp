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
queue <char> qchar;
queue <ll> qnum;
int main()
{
    in ;
    ll t ,n,c=0,sum=0;
    char ch='+';
    cin >>t;
    while (t>0)
    {
        do
        {
            if (c==0)
            {
                cin >>n;
                qnum.push(n);
                c=1;
            }
            else
            {
                cin >>ch;
                if (ch!='=')
                    qchar.push(ch);
                c=0;
            }
        }while (ch!='=');
        ch='+';c=0;
        sum=qnum.front();
        qnum.pop();
        while (!qnum.empty())
        {
            if (qchar.front()=='*')
            {
                sum =sum *qnum.front();
                qnum.pop();
                qchar.pop();
            }
            else if (qchar.front()=='/')
            {
                sum =sum /qnum.front();
                qnum.pop();
                qchar.pop();
            }
            else if (qchar.front()=='+')
            {
                sum =sum +qnum.front();
                qnum.pop();
                qchar.pop();
            }
            else if (qchar.front()=='-')
            {
                sum =sum -qnum.front();
                qnum.pop();
                qchar.pop();
            }
        }
        cout<<sum<<endl;
        while (!qnum.empty())
            qnum.pop();
        while (!qchar.empty())
            qchar.empty();
        t--;
    }


    return 0;
}

