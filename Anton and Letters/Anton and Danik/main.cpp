#include <iostream>

using namespace std;

int main()
{
    int n,anton=0,danik=0;
    cin >> n;
    char arr [n];
    for (int i=0;i<n;i++)
    {
        cin >> arr [i];
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]=='A')
        {
            anton++;
        }
        else
        {
            danik ++;
        }
    }
    if (anton > danik )
    {
        cout << "Anton";
    }
    else if (anton ==danik)
    {
        cout << "Friendship";
    }
    else
        cout<<"Danik";


    return 0;
}
