#include <iostream>

using namespace std;

int main()
{
    double s,x1,x2,t1,t2,p,d,vtram ,vfoot,ttram,tfoot,dis;
    cin>>s>>x1>>x2>>t1>>t2>>p>>d;
    vtram =1/t1;
    vfoot =1/t2;
    if (x2>x1 &&d==1&&p<=x1)
    {
        dis=(x2-x1)+(x1-p);
        ttram =dis/vtram;
        tfoot =(x2-x1)/vfoot;
    }
    else if (x2>x1 &&d==1&&p>x1)
    {
        dis =(s-p)+s+x1+(x2-x1);
        ttram =dis/vtram;
        tfoot =(x2-x1) /vfoot;
    }
    else if (x2>x1 &&d==-1&&p>=x1)
    {
        dis =(p-x1)+2*x1+(x2-x1);
        ttram =dis/vtram;
        tfoot =(x2-x1) /vfoot;
    }
    else if (x2<x1 &&d==1&&(p<x1 ||p>x1))
    {
        dis =(s-p)+(s-x1)+(x1-x2);
        ttram =dis/vtram;
        tfoot =(x1-x2) /vfoot;
    }
    else if (x2<x1 &&d==-1&&p>=x1)
    {
        dis =p-x2;
        ttram =dis/vtram;
        tfoot =(x1-x2) /vfoot;
    }
    else if (x2<x1 &&d==-1&&p<x1)
    {
        dis =p+s+(s-x1)+(x1-x2);
        ttram =dis/vtram;
        tfoot =(x1-x2) /vfoot;
    }
    cout <<min (ttram,tfoot);

    return 0;
}
