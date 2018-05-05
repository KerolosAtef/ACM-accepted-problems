#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    string a ,b,c;
    int s,x,y;
    cin >> a >> b ;
    s= atoi(a.c_str())+atoi(b.c_str());
    stringstream ss;
    ss << s;
    c = ss.str();
    for (int i =0; i<a.length();i++)
    {
        if (a[i]!='0')
        {
           a.erase(remove (a.begin(),a.end(),'0'),a.end());
        }
    }
    for (int i =0; i<b.length();i++)
    {
        if (b[i]!='0')
        {
           b.erase(remove (b.begin(),b.end(),'0'),b.end());
        }
    }
    for (int i =0; i<c.length();i++)
    {
        if (c[i]!='0')
        {
           c.erase(remove (c.begin(),c.end(),'0'),c.end());
        }
    }
    x=atoi(a.c_str())+atoi(b.c_str());
    y=atoi(c.c_str());
    if (x==y)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
