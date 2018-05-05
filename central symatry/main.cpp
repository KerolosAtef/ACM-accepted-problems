#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c,d;
    cin >>a>>b>>c;
    d=b;
    reverse(b.begin(),b.end());
    reverse(a.begin(),a.end());
    if (a==c &&d==b)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
