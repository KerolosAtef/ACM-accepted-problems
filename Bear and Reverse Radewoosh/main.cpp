#include <bits/stdc++.h>

using namespace std;
int main()
{
int n,c,p,t,z,l;
int x=0;
int sum = 0;
int y=0;
int r=0;
int score[1500];
int time[1500];
cin >>n>>c;
for (int i=0;i<n;i++)
{
    cin>>score[i];
}
for (int j=0;j<n;j++)
{
    cin>>time[j];
}
for (int k=0;k<n;k++)
{
    x+=time[k];
    z=score[k]-x*c;
    if (z<0)
    {
      z=0;
    }

    sum+=z;
}
for (int f=n;f>0;f--)
{
    y+=time[f];
    l=score[f]-y*c;
        if (l<0)
        {
            l=0;
        }

    r+=l;
}
if (sum >r &&n!=1)
{
    cout << "Limak";
}
else if (sum<r && n!=1)
{
    cout << "Radewoosh";
}
if (sum == r || n==1 )
    cout << "Tie";
    return 0;

}

