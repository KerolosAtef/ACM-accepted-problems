#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int > v;
int sum=0;
bool isprime ( int n)
{
    if (n<1)return false;
    for (int i=2;i*i<=n;i++)
        if (n%i ==0)return false;
    return true;
}
int main()
{
    int arr [300]={};
    for (int i=97,j=1;i<=122;i++,j++)
        arr[i]=j;
    for (int i=65,j=27;i<=90;i++,j++)
        arr[i]=j;
    string x;
    while (cin>>x)
    {
        for (int i=0;i<x.length();i++)
            sum+=arr[x[i]];
        if (isprime(sum))
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
        sum=0;
    }
    return 0;
}
