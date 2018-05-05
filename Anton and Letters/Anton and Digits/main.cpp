#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,x,y;
    cin >> a>>b>>c>>d;
    x=min (c,d);
    y=a-x;
    if (x>=a)
        cout <<a*256;
    else if (y>b)
        cout << x*256 +b*32 ;
        else
        cout << x*256+y*32;
    return 0;
}
