#include <iostream>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,x,z,y,a,b,s;
    cin >> n >>k>>l>>c>>d>>p>>nl>>np;
    x=k*l;
    z=x/nl;
    y=c*d;
    a=p/np;
    s = z;
    if (y<s)
        s=y;
if (a<s)
    s=a;
cout << s/n;


    return 0;
}
