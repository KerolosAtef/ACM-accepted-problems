#include <iostream>
#include<bits/stdc++.h>
using namespace std;
complex <double > determine (complex<double> arr[20][20],int x)
{
    complex <double> sum =0,a,b,c;
    if (x==3)
    {
        a=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]));
        b=(arr[0][1])*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]));
        c=arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));
        sum =a-b+c;
    }
    else if (x==2)
    {
        sum =(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
    }
    return sum;
}
int main()
{
    9 12  -6 -8  5 0
    -6 -8  8 3  2 4
    int a,b;
    complex <double>arr [20][20],arr3[3]={};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin >> a>>b;
            arr [i][j]=a+1i*b;
        }
    }
    arr3[0]=determine(arr,2);
    arr3[1]=0+100i;
    cout << arr3[1]/arr3[0];
    cout <<arr[0][0]/arr[0][2];
    return 0;
}
