#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int t,n,u,l,r,val,q,a;
    scanf("%d" , &t);
    while (t--)
    {
        scanf("%d %d" , &n , &u);
        int arr[n]={};
        int sum =0;
        for (int i=0;i<u;i++)
        {
            scanf("%d %d %d" , &l , &r , &val);
            arr[l]+=val;
            arr[r+1]+=val*-1;
        }
        for (int i=0;i<n;i++)
        {
            sum+=arr[i];
            arr[i]=sum;
        }
       scanf("%d" , &q);
        for (int i=0;i<q;i++)
        {
            scanf("%d" , &a);
            printf("%d\n" , arr[a]);
        }

    }
    return 0;
}
