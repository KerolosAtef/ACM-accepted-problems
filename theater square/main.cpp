#include <iostream>

using namespace std;

int main()
{
    long long m ,n,a ,x,y,z;
    cin>> n ;
    cin>>m ;
    cin>>a ;
    if (n%a== 0){
    x=n/a;
    }
    else {
        x=(n/a)+1;
    }

    if  (m%a== 0){
    y=m/a;
    }
    else {
        y=(m/a)+1;
    }

    z=x*y;
    cout<< z;
    return 0;
}