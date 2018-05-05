#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i =10,j=1;
void reverse2 (int x,int g)
{
    if (g>0)
    {
        int y=x%i;
        y=y/j;
        i*=10;
        j*=10;
        cout<< y;
        reverse2 (x,g-1);
    }
    return ;
}
int run(int x){
    if(x == 0) return 0;
    cout<< "x : " << x << endl;
    cout<<(x%10)*floor(pow(10,log10(x)))<<endl;
    return (x%10)*pow(10,log10(x)) + run(x/10);
}
int main()
{
    /****************************
    long long x,y,m=1,count =0;
    cin >> x;
    while (x%m!=x)
    {
        count ++;
        m*=10;
    }
    for (int k=1,i=10,j=1;k<=count;i*=10,j*=10,k++)
    {
        y=x%i;
        y=y/j;
        cout<< y;
    }
    *************************************/


    /*************************************
    int x,temp;
    cin >> x;
    string y;
    stringstream ss;
    ss<<x;
    y=ss.str();
    for (int i=0,j=y.length()-1;i<.5*y.length();i++,j--)
    {
        temp =y[j];
        y[j]=y[i];
        y[i]=temp;
    }
    cout << y;

    ****************************************/

    reverse2 (1234,4);
    int arr []= {1,2,3,4,5,6};
    cout<<binary_search(arr,arr+6,4)<<endl;
    cout<<run(1245);
    return 0;
}
