#include <iostream>

using namespace std;
int arr [100005];
int n ;
int max_sub_arr ()
{
    int max_so_far = 0 ,max_ending_here = 0;
    for (int i=0;i<n;i++)
    {
        max_ending_here +=arr[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}
int main()
{
    cin >>n;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    cout<<max_sub_arr();
    return 0;
}
