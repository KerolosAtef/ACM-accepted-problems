#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,y=1,f,v=0;
    string x;
    cin >> n>>m;
    char arr [n][m];
    int arr2 [n];
    for (int i=0;i <n ;i++)
    {
       cin >>x;
       for (int j=0;j<m ;j++)
       {
           int g= x[j];
          arr [i][j]=g;
       }
    }

    for (int i=0;i <m ;i++)
    {
        int maxi= arr [0][i];
       for (int j=1;j<n ;j++)
       {
         if (arr [j][i]> maxi )
         {
             maxi = arr [j][i];
             y = j+1;
         }
         if (arr [j][i]== maxi )
         {
             f++;
         }
       }
       arr2 [i]=y;
       y=1;
       if (f==n-1)
       {
            v++;
            f=0;
       }

    }
    sort (arr2,arr2+n);
    for (int i = 0; i <m-1;i++)
    {
       // cout << arr2 [i]<<" ";
       if (arr2 [i]!=arr2 [i+1] )
        {
            v++;
        }

    }

        cout << v +1;



    return 0;
}
