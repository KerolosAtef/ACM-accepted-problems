#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,m,x,temp,count=0;
    string s;
    cin>>n;
    queue<int> qleft ,qright;
    for (int i=0;i<n;i++)
    {
        cin>>l>>m;
        l=l*100;
        temp=l;
        for (int j=0;j<m;j++)
        {
            cin>>x>>s;
            if (s=="right")
            {
               qright.push(x);
            }
            else
            {
                qleft.push(x);
            }
        }
        bool switchs =true;
        while (!qleft.empty()|| !qright.empty())
        {

            while (switchs==true)
            {
                if (qright.size()==0 &&qleft.size() ==0)
                    break;
                if (qleft.size()==0 &&qright.size()!=0)
                {
                    count++;
                    switchs=false;
                    break;
                }
                l=l-qleft.front();
                if (l>0)
                    qleft.pop();
                else
                {
                    switchs=false;
                    count++;
                }
            }
            l=temp;
            while (switchs ==false )
            {
                if (qright.size()==0 &&qleft.size() ==0)
                    break;
                if (qright.size()==0 &&qleft.size() !=0)
                {
                    count++;
                    switchs=true;
                    break;
                }
                l=l-qright.front();
                if (l>0)
                    qright.pop();
                else
                {
                    switchs=true;
                    count++;
                }
            }
            l=temp;
        }
        cout<<count+1<<endl;
        count=0;
    }

    return 0;
}
