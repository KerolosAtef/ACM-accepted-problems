#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c,x,y,z,r,f,d;
   cin >> a>>b>>c;
   z=(a+b)*c;
   x=(a*b)+c;
   y=a*(b+c);
   r=a+(b*c);
   f=a*b*c;
   d=a+b+c;

   int arr[6]={x,y,z,r,f,d};


   sort (arr,arr+6);
   cout << arr[5];

    return 0;
}
