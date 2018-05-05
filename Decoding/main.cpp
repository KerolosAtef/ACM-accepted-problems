#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*void Decoding (string x,int n)
{
    if (n==0)return;
    if (n%2==0)
    {
        cout <<x[(n/2)-1];
        x.erase(remove (x.begin(),x.end(),x[(n/2)-1]),x.end());
        Decoding(x,n-1);
    }
    else
    {
        cout <<x[n/2];
        x.erase(remove (x.begin(),x.end(),x[n/2]),x.end());
        Decoding(x,n-1);
    }
}
*/
int main()
{
    int n;
    string x;
    cin >> n>>x;
    if (n%2==1)
    {
        char arr1[n/2+1];
        char arr2[n/2];
        arr1[n/2]=x[0];
        for (int i=1,j=(n/2)-1;j>=0;i+=2,j--)
        {
            arr1[j]=x[i];
        }
        for (int i=2,j=(n/2)-1;j>=0;i+=2,j--)
        {
            arr2[j]=x[i];
        }
        for (int i=0;i<(n/2)+1;i++)
            cout <<arr1[i];
        for (int i=(n/2)-1;i>=0;i--)
            cout <<arr2[i];
    }
    else
    {
        char arr1[n/2];
        char arr2[n/2];
        for (int i=0,j=(n/2)-1;j>=0;i+=2,j--)
        {
            arr1[j]=x[i];
        }
        for (int i=1,j=0;j<(n/2);i+=2,j++)
        {
            arr2[j]=x[i];
        }
        for (int i=0;i<(n/2);i++)
            cout <<arr1[i];
        for (int i=0;i<n/2;i++)
            cout <<arr2[i];
    }
    return 0;
}
