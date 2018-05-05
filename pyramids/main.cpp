#include <iostream>

using namespace std;

int main()
{
        int x;
        cin >> x;
        int z=x/2;
        for (int i=0;i<(x+1)/2;i++)
        {
            for (int j =0;j <z;j++)
            {
                cout << " ";
            }
            int n =x-(2*z);
            z--;
            for (int f=0;f<n;f++)
            {
                cout << "*";
            }
            cout << endl;
        }


    return 0;
}
