#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    vector <ll> usb , ps2 ,usbpre ,ps2pre,both ;
    ll a ,b ,c ,m,num,cost =0 ,com=0,ptr1=0,ptr2=0;
    string type;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&m);
    if (m == 0)
    {
        cout<<"0 0";
        return 0;
    }
    for (int i=0;i< m;i++)
    {
        scanf("%lld",&num);
       cin>>type;
        if (type =="USB")
            usb.push_back(num);
        else
            ps2.push_back(num);
    }
    sort(usb.begin(),usb.end());
    sort(ps2.begin(),ps2.end());
    for (int i=0;i<usb.size() &&i<a ;i++)
    {
        ptr1 ++;
        com++;
        cost+=usb[i];
    }
    for (int i=0;i<ps2.size() &&i<b ;i++)
    {
        ptr2 ++;
        com++;
        cost+=ps2[i];
    }
    for (int i=ptr1 ;i<usb.size();i++)
        both.push_back(usb[i]);
    for (int i=ptr2 ;i<ps2.size();i++)
        both.push_back(ps2[i]);
    sort(both.begin(),both.end());
    for (int i=0 ;i<both.size();i++)
    {
        if (c<=0)break;
        cost+=both[i];
        com++;
        c--;
    }
    printf("%lld %lld",com,cost);
    return 0;
}
