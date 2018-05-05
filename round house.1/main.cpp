#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,y,z,c,m,k;
    cin>>n>>a>>b;
    vector <int>v;
   for (int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    if (b>0&&n>(a+b))

    {


cout << v[(a+b)-1];
    }

    if (b>n &&b>0 &&b%n>=1)
    {
         if ((n+a)==b)
         {
              cout << 1;
         }
   else {
        y=b%n;
        cout<< v[(a+y)-1];
   }
    }
        if (b+a>n &&b>0&&b/n==0)
    {
        z=(a+b)-n;
        cout<< v[(z-1)];
    }
 if (b+a>n &&b>0&&b%n==0)
 {
   cout <<a;
 }


 if (b>0&&(a+b)==n)
    cout << n;
if (b<0)
{
    c=a-1;
    m=-b-c;
    if (m<=n &&m>0)
        cout << v[n-m];
    else  if (m==0)
        cout << 1;
        else if (m<0){
            m=m*-1;
        cout << v[m];
        }
    else if (m>n)
    {
        k=m%n;
         sort (v.begin(),v.end(),greater <int >());
        if (k==0)
        {
          cout << v[v.size()-1];
        }

     else
        cout <<v[k-1];
    }
}
if (b==0)
    cout << a;
    return 0;
}
