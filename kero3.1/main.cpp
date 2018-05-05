#include <iostream>

using namespace std;

int main()
{
    int pi , qi,n,a=0,sum=0;
    cin >> n ;
    for (int i=0 ;i<n ;i++){
        cin >> pi >>qi;
if (pi+2 <= qi){
            sum++;
}else
continue;
    }
cout << sum;

    return 0;
}
