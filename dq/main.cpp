#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
        deque <int>dq;
        for (int i=1;i<=10;i++)
        {
            dq.push_back(i);
        }

        while (!dq.empty())        {
           {

            cout<<dq.front();
            dq.pop_front();
           }
        }
    return 0;
}
