#include <iostream>

using namespace std;

int main()
{
    static int x =10;
    if (x--){
        cout<<x<<endl;
        main();
    }

    return 0;
}
