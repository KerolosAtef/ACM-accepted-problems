#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
	string x,spilt="";
	cin >>n;
	deque <string> dq,tempdq;
	for (int i=0;i<=n;i++)
    {
        getline(cin ,x);
        if (x=="pwd")
        {
            while (!dq.empty())
            {
                cout<<'/'<<dq.front();
                tempdq.push_back(dq.front());
                dq.pop_front();
            }
            cout<<"/";
            dq=tempdq;
            tempdq.clear();
            cout<<endl;
        }
        else
        {
            x.push_back('/');
            if (x[3]=='/')
            {
                dq.clear();
                for (int i=4;i<x.length();i++)
                {
                    if (x[i]=='.'&&x[i+1]=='.')
                    {
                        dq.pop_back();
                        i++;
                    }
                    else
                    {
                        if (x[i]=='/')
                        {
                            if (spilt.length()!=0)
                                dq.push_back(spilt);
                            spilt="";
                        }
                        else
                        {
                            spilt.push_back(x[i]) ;
                        }
                    }
                }
            }
            else
            {
                for (int i=3;i<x.length();i++)
                {
                    if (x[i]=='.'&&x[i+1]=='.')
                    {
                        dq.pop_back();
                        i++;
                    }
                    else
                    {
                        if (x[i]=='/')
                        {
                            if (spilt.length()!=0)
                                dq.push_back(spilt);
                            spilt="";
                        }
                        else
                        {
                            spilt.push_back(x[i]) ;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
