#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=0,A=0,C=0,G=0,T=0,index;
    string x;
    cin >>n>>x;
    char arr[4]{'A','C','G','T'};
    int f[300]={};
    for (int i=0;i<n;i++)
    {
        if (x[i]=='A')
            f['A']++;
        else if (x[i]=='C')
            f['C']++;
        else if (x[i]=='G')
            f['G']++;
        else if (x[i]=='T')
            f['T']++;
    }
    int mani =min(min(f['A'],f['C']),min(f['G'],f['T']));
    if (mani ==f['A'])
        index =0;
    else if (mani == f['C'] )
        index =1;
    else if (mani ==f['G'])
        index =2;
    else if (mani == f['T'])
        index =3;
    for (int i=0;i<n;i++)
    {
        if (x[i]=='?')
        {
            x[i]=arr[index];
            f[arr[index]]++;
            int mani =min(min(f['A'],f['C']),min(f['G'],f['T']));
            if (mani ==f['A'])
                index =0;
            else if (mani == f['C'] )
                index =1;
            else if (mani ==f['G'])
                index =2;
            else if (mani == f['T'])
                index =3;
        }
    }
    for (int i=0;i<n;i++)
    {
        if (x[i]=='A')
            A++;
        else if (x[i]=='C')
            C++;
        else if (x[i]=='G')
            G++;
        else if (x[i]=='T')
            T++;
    }

    if (A==C&&C==G&&G==T)
        cout <<x;
    else
        cout<<"===";
    return 0;
}
