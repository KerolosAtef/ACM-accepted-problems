#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

   string x;
   cin >>x;
   int n,s,o;
   char y;
   n=x.length();
   vector <int> v;
   for (int i=0;i<n;i+=2)
   {
       y=x[i]-'0';
       v.push_back(y);
   }
   s=(n+1)/2;
   sort (v.begin(),v.end());

   for (int m=0;m<s;m++)
   {
if (m!=s-1)
    cout <<v[m]<<"+";
    else
        cout <<v[m];
   }
    return 0;
}
