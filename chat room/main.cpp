#include <iostream>

using namespace std;

int main()
{
    int f,g,h,s,b,a=0;
    string x;
    cin >>x;
    for (int i=0;i<x.length();i++)
    {
      if (x[i]=='h')
      {
            a=a+1;
            b=i+1;
      break;
      }
    }
     for (int j=b;j<x.length();j++)
    {
         if (x[j]=='e')
      {
            a=a+1;
            h=j+1;
      break;
      }
    }
     for (int k=h;k<x.length();k++)
    {

         if (x[k]=='l')
      {
            a=a+1;
            f=k+1;
      break;
      }
    }
     for (int p=f;p<x.length();p++)
    {
         if (x[p]=='l')
      {
            a=a+1;
            g=p+1;
      break;
      }
    }
     for (int m=g;m<x.length();m++)
    {
         if (x[m]=='o')
      {
            a=a+1;
            s=m;
      break;
      }
    }
    if (a==5&&s>=g&&g>=f&&f>=h&&h>=b)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
