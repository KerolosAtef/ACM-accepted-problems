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
vector <string > words;
set <string>st ;
int main()
{
    in ;
    string x , y="";
    while (getline (cin ,x))
    {
        for (int i=0;i<x.length();i++)
        {
            if (x[i]=='"'|| x[i]==':' ||x[i]=='.'||x[i]=='!' ||x[i]=='@' ||x[i]=='$' ||x[i]=='%' ||x[i]=='^' ||x[i]=='&' ||x[i]=='*' ||x[i]=='(' ||x[i]==')' ||x[i]=='_' ||x[i]=='-' ||x[i]=='+' ||x[i]=='=' ||x[i]=='/'||x[i]=='#' ||x[i]==','||x[i]==';'||x[i]=='>'||x[i]=='<'  ||x[i]=='?'||x[i]=='{'||x[i]=='}'||x[i]=='['||x[i]==']')
                continue;
            if (x[i]=='\'' )
                while (x[i]!=' ')
                {
                    i++;
                    continue ;
                }
            if (x[i]!=' ')
                y.push_back(x[i]);
            else
            {
                transform(y.begin(), y.end(), y.begin(),(int (*)(int))tolower);
                st.insert(y);
                y="";
            }
        }
        transform(y.begin(), y.end(), y.begin(),(int (*)(int))tolower);
        st.insert(y);
        y="";
        c++;
    }
    words.assign(st.begin() ,st.end());
     for (int i=0;i<words.size();i++)
            cout<<words[i]<<endl;
    return 0;
}
