#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a ,b,s,k,g;
    int arr [5][5];
    for (int i=0;i<5;i++)
    {
        for (int j=0; j<5;j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int m=0;m<5;m++)
    {
        for (int n=0; n<5;n++)
        {
            if ( arr[m][n]==1){
                a=m;
            b=n;
            m=10;
              break;
            }
        }
    }
    if (a >=2)
        s= a-2;
    else if (a<2)
        s=2-a;
      if (b >=2)
        k= b-2;
    else if (b<2)
    {
        k=2-b;
    }
    g=k+s;
    cout << g;


    return 0;
}
