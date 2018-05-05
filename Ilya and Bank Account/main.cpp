#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a ;
    int y,sum =0,x=1,m=0,g,b=10;
    cin >> a;
    int n =atoi(a.c_str());
    y = a.length();
    vector <int > v;
    if (a[0]=='-')
    {
        for (int i=1; i<y;i++)
        {
            g= a[i]-'0';
            v.push_back(g);
        }

        for (int j=y-3; j>=0;j--)
        {
            sum = sum + (v[j]*x);
            x= x*10;
        }
        sum = sum *-1;
        v.erase(v.end()-2);

     /*   for (int z=0;z<y-2;z++)
        {
            cout << v[z] <<" ";
        }
        */
        for (int k=y-4; k>=0;k--)
        {
            m = m + (v[k]*b);
            b= b*10;
        }
        m = m+ v[y-2];
        m=m*-1;
        if (m>sum)
        {
            cout <<m;
        }
        else
        {
            cout << sum;
        }

    }
    else
    {
        cout << n;
    }

    return 0;
}
