#include <iostream>

using namespace std;

int main()
{
    string x,y;
    cin >>x>>y;
    int f[300]={};
    int j=0;
    pair <char ,char >arr[x.length()];
    for (int i=0;i<x.length();i++)
    {
        if (x[i]!=y[i])
        {
          if ((f[x[i]]==0 &&f[y[i]]==1) ||(f[x[i]]==1 &&f[y[i]]==0))
          {
            cout << -1;
            return 0;
          }
          if (f[x[i]]==0 &&f[y[i]]==0)
          {
            arr[j].first=x[i];
            arr[j].second=y[i];
            f[x[i]]++;
            f[y[i]]++;
            j++;
          }

        }
    }
    for (int i=0;i<j;i++)
    {
       for (int k=0;k<y.length();k++)
       {
           if (y[k]==arr[i].first)
           {
              y[k]=arr[i].second;
           }
           else if (y[k]==arr[i].second)
           {
              y[k]=arr[i].first;
           }
       }
    }
    //cout <<y<<endl;
    for (int i=0;i<y.length();i++)
    {
        if (x[i]!=y[i])
        {
            cout <<-1;
            return 0;
        }
    }
    cout <<j<<endl;
    for (int i=0;i<(j);i++)
    {
        cout <<arr[i].first<<" " <<arr[i].second<<endl;
    }
    return 0;
}
