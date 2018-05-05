#include <iostream>

using namespace std;
long long power (int x,int y)
{
    long long z=1;
    if (y==1)return x;
    else if (y%2==0)
    {
        z=power(x,y/2)%100;
        return (z*z)%100;

    }
    else
    {
        z=power(x,y/2)%100;
        return (x*z*z)%100;
    }
}
int main()
{
    int n;
    cin >>n;
    cout<<power(5,n);
    /*************another solution
    int n;
    cin>>n;
    cout<<25;
    *********************************/
    return 0;

}
