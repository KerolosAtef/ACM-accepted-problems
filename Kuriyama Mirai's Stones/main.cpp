#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long n,sum=0,sum2=0,q,l,r,type;
int main()
{
    scanf("%lld",&n);
    long long arr[n],arr2[n];
    for (int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        arr2[i]=arr[i];
    }
    sort (arr2,arr2+n);
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
        arr[i]=sum;
        sum2+=arr2[i];
        arr2[i]=sum2;
    }
    scanf("%lld",&q);
    for (int i=0;i<q;i++)
    {
        scanf("%lld %lld %lld",&type,&l,&r);
        if (type ==1 && l!=1)
            printf("%lld \n",arr[r-1]-arr[l-2]);
        else if (type ==2 && l!=1)
           printf("%lld \n",arr2[r-1]-arr2[l-2]);
        else if (type ==1 && l==1)
            printf("%lld \n",arr[r-1]);
        else if (type ==2 && l==1)
            printf("%lld \n",arr2[r-1]);
    }
    return 0;
}
