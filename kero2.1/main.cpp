#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z ,a =0,sum =0;


    cin >> n;
for ( int i=1 ;i<=n ;i++){
cin >>x>>y>>z;
 if (x==1 && y ==1 || x==1 && z ==1 || y==1 && z==1){
    a=1;
    sum+=a;
 }


}
cout<< sum;
    return 0;
}
