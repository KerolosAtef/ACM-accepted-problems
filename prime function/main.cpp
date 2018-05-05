#include <iostream>

using namespace std;
bool prime (int x)
{
    int count =0;
    if ( x==1 || x==2)
        return true ;
    else
    {
        for (int i=3; i<x; i++)
        {
            if (x%i!=0)
                count ++;
        }
        if (count == x-3)
            return true ;
        else
            return false ;
    }
}
int main()
{
    int x;
    cin >> x;
    cout << prime(x);
    return 0;
}
