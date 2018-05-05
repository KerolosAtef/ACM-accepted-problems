#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector <int >v;
vector <char>vop;

int main()
{
    string x,temp="";
    cin >>x;
    int i=0,j=0,temp2,temp3,sum=0;
    while (x[i]!='=')
    {
        if (x[i]!='-' && x[i]!='+'&& x[i]!='*' &&x[i]!='/')
        {
           temp.push_back(x[i]);
        }
        else
        {
            vop.push_back(x[i]);
            int n =atoi(temp.c_str());
            v.push_back(n);
            temp="";
        }
        i++;
    }
    int n =atoi(temp.c_str());
    v.push_back(n);
    temp="";
    for (int k=0;k<vop.size();k++)
    {
        if (vop[k]=='*')
        {
            v[k]=v[k]*v[k+1];
            v[k+1]=0;
        }
        else if (vop[k]=='/')
        {
            v[k]=v[k]/v[k+1];
            v[k+1]=0;
        }
    }
    for (int m=0;m<v.size();m++)
        if (v[m]==0)
            v.erase(v.begin()+m);

    for (int m=0;m<vop.size();m++)
        if (vop[m]=='*'||vop[m]=='/')
            vop.erase(vop.begin()+m);

    for (int m=0;m<vop.size();m++)
        if (vop[m]=='-')
            v[m+1]*=-1;

    for (int m=0;m<v.size();m++)
        sum+=v[m];
    cout<<sum;
    return 0;
}
