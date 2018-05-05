#include <iostream>

using namespace std;

int main()
{
    int c1, c2,c3,c4,c5,a;
    cin >> c1>>c2>>c3>>c4>>c5;
    a=c1+c2+c3+c4+c5;
    if (a%5 ==0 && a !=0)
       cout <<a/5;
    else
        cout << "-1";
    return 0;
}
