#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,y,x,z,s,f,g,h;
    cin >> a>>b>>c>>d;
    if (c<a &&d<b &&d>a)
    {
        y=b-c;
    cout <<y;
    }
      else if (c<a &&d<a  ||c>b &&d>b)
     {
        x=d-c;
        z=b-a;
        s=x+z;
    cout <<s;
     }
      else if (c>a &&d>b &&c<b)
      {
        f=d-a;
    cout <<f;
      }
    else if (c<a &&d>b )
    {
        g=d-c;
    cout <<g;
    }
    else if (c>a &&d<b )
    {
        h=b-a;
    cout <<h;
    }
    return 0;
}
