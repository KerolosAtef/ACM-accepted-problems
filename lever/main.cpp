#include <iostream>

using namespace std;
/*
keroooooooooo
*/
int main()
{
    string s ;
    cin >> s;
    int  x,y,z,m,d;
   long long  right =0,left =0;
    x= s.length();
   y= s.find('^');
    for (int i =0 ; i <y+1;i++)
    {
        if (s[i]!='=')
        {
            d = s[i]-'0';
            z= d* (y-i);
            left  +=z;
        }
    }
    for (int i =y+1 ; i <x;i++)
    {
        if (s[i]!='=')
        {
            d= s[i]-'0';
            z= d* (y-i);
            right +=z;
        }
    }
    if (( left + right) ==0)
    {
        cout << "balance";
    }
    else if ( (left + right) >0)
    {
        cout << "left";
    }
    else if ( (left + right) <0)
    {
        cout << "right";
    }
    return 0;

}
