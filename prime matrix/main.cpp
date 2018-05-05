#include <iostream>
#include  <bits/stdc++.h>
using namespace std;
int n,m;
bool isprime (int n)
{
    if (n<2)return false ;
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)return false;
    }
    return true;
}
bool matrix_prime_row (int arr[500][500])
{
    int count2=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
           if (isprime(arr[i][j]))
                count2++;
        }
        if (count2==m)
            return true;
        count2=0;
    }
    return false;
}
bool matrix_prime_column (int arr[500][500])
{
    int count3=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
           if (isprime(arr[j][i]))
                count3++;
        }
        if (count3==n)
            return true;
        count3=0;
    }
    return false ;
}
int l=0;
int main()
{
    int arr[500][500];
    int arr3[500][500];
    int count =0,counter=0;
    cin>>n>>m;
    int arr2[1000];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            arr3[i][j]=arr[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (!isprime(arr[i][j]))
            {
                while (!isprime(arr[i][j]))
                {
                    arr[i][j]++;
                    count++;
                }
                if (matrix_prime_row(arr))
                {
                    break;
                }
            }
        }
        for (int k=0;k<m;k++)
        {
            arr[i][k]=arr3[i][k];
        }
        arr2[l]=count;
        l++;
        count =0;
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (!isprime(arr[j][i]))
            {
                while (!isprime(arr[j][i]))
                {
                    arr[j][i]++;
                    counter ++;
                }
                if (matrix_prime_column(arr))
                {
                    break;
                }
            }
        }
        for (int k=0;k<n;k++)
        {
            arr[k][i]=arr3[k][i];
        }
        arr2[l]=counter;
        l++;
        counter =0;
    }

    sort (arr2,arr2+l);
    /*for (int i=0;i<l;i++)
        cout<<arr2[i]<< " ";*/
    cout<<arr2[0];

    return 0;
}
