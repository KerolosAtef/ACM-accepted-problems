#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0,c=0,m =0,t=0,r=0,y=0,x ,z,f,d;
    cin >> n;
    int arr [n],arr3 [n],arr4 [n],arr5 [n];
    for ( int i=0;i <n; i++)
    {
      cin >>arr[i];
     if (arr [i]==1)
      {
          arr3 [a]=i+1;
          a=a+1;
      }
      else if (arr [i]==2)
      {
          arr4 [b]=i+1;
          b =b +1;
      }
       else if (arr [i]==3)
      {
          arr5 [c]= i+1;
          c=c+1;
      }
    }
    int arr2 [3]={a,b,c};
    sort (arr2,arr2 +3);
    cout << arr2[0]<<"\n";
    for (int j=0;j<arr2 [0];j++)
    {
        cout << arr3 [j]<<" "<<arr4 [j]<<" "<<arr5 [j]<<"\n";
    }
    return 0;
}
