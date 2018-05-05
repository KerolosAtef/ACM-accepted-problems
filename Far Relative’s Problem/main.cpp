#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    char s;
    cin >>n;
    int farr [370]={};
    int marr [370]={};
    for (int i=0;i<n;i++)
    {
        cin>>s>>a>>b;
        if (s=='M')
            for (int j=a;j<=b;j++)
                marr[j]++;
        else
            for (int j=a;j<=b;j++)
                farr[j]++;
    }
    int maxi=0;
    for (int i=0;i<370;i++)
    {
       /* if (farr[i] ==marr [i] && farr[i] !=0)
        {
            if (farr[i] > maxi)
                maxi=farr [i];
        }*/
        maxi=max(maxi,(min(farr[i],marr[i])));
    }
    cout<<maxi*2;
    return 0;
}
