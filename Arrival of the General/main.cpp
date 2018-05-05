#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,a,b,l,h,s;
    cin >>n ;
    int arr [n];
    int arr2 [n];
    for (int i=0; i<n;i++)
    {
        cin >>arr [i];
        arr2 [i]=arr[i];
    }
    sort (arr,arr+n);
    a = arr[0];
    b= arr[n-1];
    for (int j=0;j<n;j++)
    {
      if (arr2[j]==a)
      {
          l=j;

      }
    }
    for (int m=0;m<n;m++)
    {
        if (arr2 [m]==b)
      {
          h=m;
          break;
      }
    }

    s= (n-1-l)+h;
    if (h>l)
    cout << s-1;
    else
        cout <<s;
    return 0;
}
