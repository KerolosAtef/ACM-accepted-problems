#include <iostream>

using namespace std;

int main()
{
    int n,sum;

   cin >> n ;
   sum =0 ;
   for (int i=0;i<=n;i+=5)
   {
       sum =sum + i;
   }
    cout << sum ;

    return 0;
}
