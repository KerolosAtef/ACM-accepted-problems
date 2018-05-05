#include <iostream>

using namespace std;
int sum =0;
int arr_sum (int arr[],int n)
{
    if (n==0)return sum;
    sum+=arr[n-1];
    arr_sum(arr,n-1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >>arr[i];
    cout <<arr_sum(arr,n);

    return 0;
}
