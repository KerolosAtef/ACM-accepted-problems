#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=1 ,y=1,b=0,c=0,s,z,m;
    char a;
    cin >> n;
    m= 2*n -1;
    char arr [m];
    s=(n*n)-m;
    char arr2 [s];
    for (int i=0 ; i<n ; i++)
    {
        for (int j =0; j < n; j++)
        {
            cin >>a;
            if (i==j ||(i+j) ==n-1)
            {
                arr [b] = a;
                b++;
            }
            else
            {
                arr2 [c]=a;
                c++;
            }
        }
    }
    for (int i=0;i<m ; i++)
    {
        if (arr [i]==arr[i+1])
        {
            x++;
        }
    }
    for (int i=0;i<s ; i++)
    {
        if (arr2 [i]==arr2 [i+1] && arr2[i]!= '*' && arr2[i+1]!= '*')
        {
            y++;
        }
    }
    z= 2*(n-1)+1;
    if (x== z && y == ((n*n)-z) && arr [0] != arr2[0])
    {
    cout <<"YES";
    }
    else
    {
        cout << "NO";
    }



    return 0;
}
