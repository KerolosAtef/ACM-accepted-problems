#include <iostream>
#include <math.h>
using namespace std;
long long power (int x,int y)
{
    long long z=1;
    if (y==1)return x;
    if (y==0)return 1;
    else if (y%2==0)
    {
        z=power(x,y/2);
        return (z*z);

    }
    else
    {
        z=power(x,y/2);
        return (x*z*z);
    }
}
int main()
{
    int n ;
    cin>>n;
    /********************** clear digits from left
    int reminder ,digits=2,power2;
    while (digits >1)
    {
        digits = log10(n);
        power2=power(10,digits);
        n = n %power2;
        cout<<"N= "<<n<<endl;
    }
    ************************************/


    /********************** clear digits from right
    int re ;
    while (n>1)
    {
        re=n%10;
        n=n/10;
        cout<<"N= "<<n<<endl;
        cout <<"the reminder = "<<re<<endl;
    }
    ***********************************/

    return 0;
}
