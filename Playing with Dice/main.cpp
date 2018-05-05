#include <iostream>
#include <math.h>
using namespace std;
 int abs (int x)
 {
     if (x>0)
        return x;
     else
        return x*-1;
 }
int main()
{
    int a,b,x=0,y=0 ,m,n,z=0;
    cin >> a>> b ;
    for (int i =1 ; i <=6 ;i++)
    {
        m= abs (a-i);
        n = abs (b-i);
        if (m >n)
        {
            x+=1;
        }
        else if (m<n)
        {
            y+=1;
        }
        else
        {
            z+=1;
        }
    }
    cout << y << " "<< z<< " "<< x ;
    return 0;
}
