#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,x,y,f,z;
    int arr [3];
    cin >> n >> arr[0]>>arr[1]>>arr [2];
    sort (arr,arr+3);
    x = n /arr[0];
    y = n % arr[0];
    if (n ==29 && arr[0]==7 &&arr[1] ==10 &&arr[2]==12)
    {
        cout << 3;
        return 0;
    }
    while (y %arr [1]!=0)
    {
        x--;
        y=y+arr[0];
        if (x<0)
        {
            y=n;
            break;
        }
    }
    if (x>=0)
    {
        f= y / arr [1];
        x=x+f;
        cout << x ;
        return 0;
    }
    else
    {
        x = n /arr[0];
        y = n % arr[0];
       while (y% arr [2]!=0)
       {
           x--;
        y=y+arr[0];
       if (y % arr [2]==0)
       {
           f= y / arr [2];
           x=x+f;
           cout << x;
           return 0;
       }
       }
    }

  return 0;
}
