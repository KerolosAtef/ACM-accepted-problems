#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,m,y;
    string a;
    cin >> n>>m ;
    char arr [n][m] ;
    for (int i=0; i<n ;i++)
    {
       cin >> a ;
       for (int j=0;j<m;j++)
       {
           arr [i][j]=a[j];
          if (arr [i][j]=='.' )
          {
              y= j-i;
              if (y<0)
              {
                  y=y*-1;
              }
              if (y==0 ||y%2==0)
              {
             arr[i][j] ='W';
              }
              else if (y%2==1)
              {
                  arr[i][j] ='B';
              }
          }
       }
    }

      for (int i=0; i<n ;i++)
    {
        for (int j =0;j <m ; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }


    return 0;
}
