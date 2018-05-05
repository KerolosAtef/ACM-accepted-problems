#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n ,sum =0,k,a=0;
   cin >> n;
   int arr [n];
   for (int i =0 ;i <n; i++)
   {
       cin >> arr[i];
   }
   sort ( arr,arr+n,greater <int>());
   for (int j=0;j<n;j++)
   {
       sum +=arr[j];
   }
   for (int m=0;m<n;m++)
   {
      sum = sum - arr[m];
       a=a+arr[m];

       if (a>sum){
        cout<<m+1;
        break;
       }
   }
    return 0;
}
