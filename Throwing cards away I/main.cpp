#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool f;
    while (true)
    {
       cin>>n;
       if (n==0)
           return 0;
        deque <int>dq;
        queue <int>q;
        f=false;
        for (int i=1;i<=n;i++)
        {
            dq.push_back(i);
        }
        while (dq.size()>1)
        {
            if (f==false)
            {
                q.push(dq.front());
                dq.pop_front();
                f=true;
            }
            else
            {
                dq.push_back(dq.front());
                dq.pop_front();
                f=false;
            }
        }

        cout<<"Discarded cards:" ;
        if (n==1)cout<<endl;
        while (q.size()>0)
        {
            if (q.size()==1)
            {
            cout<<" "<<q.front();
            cout<<endl;
            q.pop();
            }
            else
            {
            cout<<" "<<q.front()<<",";
            q.pop();
            }
        }
        cout<<"Remaining card:"<<" "<<dq.front()<<endl;
    }

    return 0;
}
