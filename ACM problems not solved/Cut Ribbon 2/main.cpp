#include <iostream>

using namespace std;

int main()
{
    int n ,a ,b,c;
    cin >> n >> a >> b >> c;
    int temp = a+b+c;
    int maxi = max(max(a,b),c);
    int mini = min(min(a,b),c);
    int midi = temp - (maxi+mini);
    int num = n/mini ;
    cout << num;




    return 0;
}
