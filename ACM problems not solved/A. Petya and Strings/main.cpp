#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string a,b;
  cin>>a>>b;
  int x,c=0,d=0,f;
  x=a.length();
  f=b.length();
  for (int h=0;h<x;h++)
  {
      a[h] = tolower(a[h]);
      b[h] = tolower(b[h]);
  }
 char arr[27]={"abcdefghijklmnopqrstuvwxyz"};
for (int i=0;i<x;i++)
{
    for (int j=0;j<27;j++)
{
    if (a[i]==arr[j])
    {
        c=c+j+1;
    }
}
}
for (int k=0;k<x;k++)
{
    for (int l=0;l<27;l++)
{
    if (b[k]==arr[l])
    {
        d=d+l+1;
    }
}
}
if (c==d)
    cout<< 0;
else if (c<d)
    cout <<-1;
else
    cout <<1;

    return 0;
}
