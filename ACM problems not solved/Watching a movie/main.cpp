#include <iostream>

using namespace std;

int main()
{
    int n,x,li , ri, mini,y,z,a,r,d,b,c,m ,g ;
    cin >> n>>x;
    pair <int ,int > arr [n];
    for (int i=0; i< n ;i++)
    {
        cin >> li>>ri;
        arr [i]= {li,ri};
        if (i==0)
        {
        y= arr [i].first /x;
        z= (y*x);
        if (z!=0)
        {
        a = arr[i].second - z;
        }
        else
        {
        a = arr[i].second - (arr [i].first-1);
        }
        if (arr [i].first % x==0&& z!=0)
        {
            z--;
            a= arr[i].second-z;
        }
        mini = a;
       // cout <<a<<endl;
        continue;
        }
      r=  arr[i].first -arr [i-1].second;
      d= r/x;
      m = (d*x);
      g=m+arr[i-1].second;
       a = arr [i].second - g;
        if (g==arr[i].first)
        {
            m--;
            g= m+arr [i-1].second ;
            a = arr [i].second - g;
        }
       // cout << a <<endl;
        mini = mini +a;
    }
    cout << mini <<endl;

    return 0;
}
