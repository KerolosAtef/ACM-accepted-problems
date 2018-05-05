#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,y=0 ;
    cin >>n>>m;
    char arr [n][m];
    memset(arr ,'#',sizeof arr);
    for (int i =1; i <n; i+=2)
    {
        if (y==0)
        {
           for (int j =0; j<m-1 ; j++)
            {
                arr [i][j]= '.';
            }
            y=1;
        }
        else
        {
            for (int j =m; j>0 ; j--)
             {
                arr [i][j]= '.';
                arr [i+1][0]='#';
             }
             y=0;
        }

    }
    for (int k=0 ;k<n; k++)
    {
        for (int l=0;l<m;l++)
        {
            cout << arr [k][l];

        }
        cout <<"\n";
    }
    return 0;
}
