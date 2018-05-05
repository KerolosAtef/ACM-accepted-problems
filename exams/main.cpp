#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,j=1,sum =0,g=0,x,y ;
    cin>> n >> k;
    int arr [n];
    for (int i=0; i<n ;i++)
    {
        arr[i]=2;
    }
    x= 2*n;
    y= k-x;
    for (int d=0; d <3;d++)
    {
        for (int i=0; i <y;i++)
        {
            arr [n-j]=arr[n-j]+1;
            for (int k=0;k <n;k++)
            {
                sum+=arr[k];
            }
            if (sum==k)
            {
                d=3;
                g=3;
                break;
            }
            j++;
            sum =0;
        }
        j=1;
    }
    int count =0;
    for (int i=0; i<n;i++)
    {
      //  cout << arr[i]<<" ";
        if (arr[i]==2)
        {
            count ++;
        }
    }
  //  cout << endl ;
    cout << count ;
    return 0;
}
