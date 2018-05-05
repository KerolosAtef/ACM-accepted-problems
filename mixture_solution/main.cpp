#include <bits/stdc++.h>

using namespace std;

int main(){
  // freopen("i.in", "rt", stdin);
  // freopen("o.out", "wt", stdout);
    for (long long i=1;;i++)
    {
        bool f =true ;
        for (int j=1;j<=20;j++)
        {
            if (i%j!=0)
                f=false;
        }
        if (f)
        {
            cout<<i<<endl;
            break;
        }
    }
  return 0;
}
