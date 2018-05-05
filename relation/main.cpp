#include <iostream>

using namespace std;

int main()
{
int t,a ,b;
string x;
cin >>t;
for (int i=0;i<t;i++)
{
    cin >> a >>x>>b;

      if ( x==">")
    {
        if (a>b)
      cout <<"true"<<endl;
    else
      cout <<"false"<<endl;
    }
    if ( x=="<")
    {
        if (a<b)
     cout <<"true"<<endl;
    else
    cout <<"false"<<endl;
    }
      if ( x=="==")
    {
        if (a==b)
cout <<"true"<<endl;
    else
      cout <<"false"<<endl;
    }
      if ( x=="!=")
    {
        if (a!=b)
        cout <<"true"<<endl;
    else
      cout <<"false"<<endl;
    }
      if ( x==">=")
    {
        if (a>=b)
        cout <<"true"<<endl;
    else
        cout <<"false"<<endl;
    }
      if ( x=="<=")
    {
        if (a<=b)
        cout <<"true"<<endl;
    else
       cout <<"false"<<endl;
    }

}


    return 0;
}
