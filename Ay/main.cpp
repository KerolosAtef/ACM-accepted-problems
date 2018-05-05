#include <iostream>

using namespace std;

int main()
{
    int x, n, smallest;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        if(i == 1){
            smallest = x;
        }else{
            if(x < smallest){
                smallest = x;
            }
        }
    }
    cout << smallest;
    return 0;
}
