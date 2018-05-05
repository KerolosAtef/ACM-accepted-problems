#include <iostream>
#include <cmath>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n=1073741824 ,sum=0;
ll arr [1000005];
int number_of_devisors (ll x)
{
    if (x==1)return 1;
    int count=2;
    bool check=false;
    for (int i=2;i*i<=x;i++)
    {
        if (x%i==0)
            count+=2;
        if (i*i==x)
            check=true;
    }
    if (check==true)
        return count-1;
    else
        return count;
}
int main()
{
    int a ,b,c;
    cin>>a>>b>>c;
    for (int i=1;i<=a;i++)
        for (int j=1;j<=b;j++)
            for (int k=1;k<=c;k++)
                arr[i*j*k]++;

    for (int i=0;i<1000005;i++)
        if (arr[i])
            sum =(sum%n +(number_of_devisors(i)*arr[i])%n)%n;
    cout<<sum;
    return 0;
}
