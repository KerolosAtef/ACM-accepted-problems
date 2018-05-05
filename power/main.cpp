#include <iostream>

using namespace std;
long long power (int x,int y)
{
    long long z=1;
    if (y==1)return x;
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
    int n,m;
    cin >>n>>m;
    cout<<power(n,m);
    return 0;
}
