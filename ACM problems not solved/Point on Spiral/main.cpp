#include <iostream>

using namespace std;

int main()
{
    int x,y,a=0,b=0,c=0,d=0,f=1,count =0;
    cin >> x>>y;
    if (x ==0 ||y==0)
    {
       if (x==0 && y ==0)
       {
           cout << 0;
       }
       else if (x==0 && y ==1)
       {
           cout << 2;
       }
        else if (x==1 && y ==0)
       {
           cout << 0;
       }
    }
    else
    {

    while (x!=a && y!= b)
    {
        if (f==1)
        {
           a=c;
           b=d;
           c=c*-1;
           c++;
          //cout << "("<<a<<","<<b<<")"<< " "<<  "("<<c<<","<<d<<")"<<endl;
           f=2;
           count ++;
        }
        else if (f==2)
        {
            a=c;
            b=d;
            d=d*-1;
            d++;
          // cout << "("<<a<<","<<b<<")"<< " "<<  "("<<c<<","<<d<<")"<<endl;
            f=3;
            count ++;
        }
        else if (f==3)
        {
            a=c;
            b=d;
            c=c*-1;
            //cout << "("<<a<<","<<b<<")"<< " "<<  "("<<c<<","<<d<<")"<<endl;
            f=4;
            count ++;
        }
        else if (f==4)
        {
            a=c;
            b=d;
            d=d*-1;
            //cout << "("<<a<<","<<b<<")"<< " "<<  "("<<c<<","<<d<<")"<<endl;
            f=1;
            count ++;
        }
    }
    cout << count -1;
    }

    return 0;
}
