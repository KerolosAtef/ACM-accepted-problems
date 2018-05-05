#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
/***
.
.
.
.
kerolos atef
.
.
.
.
***/
using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
void print_number (int n , int length)
{
    if (!length )
        return ;
    print_number(n>>1 ,length-1);
    cout<<(n&1);
}
int count_bits (int n )
{
    int count=0;
    while (n)
    {
        if (n&1)
            count++;
        n=n>>1;
    }
    return count ;
}
int get_bit (int n ,int index)
{
    return (n>>index &1);
}
int set_bit1 (int n , int index)
{
    return (n|(1<<index));
}
int set_bit0 (int n , int index)
{
    return (n&(1<<index));
}
int flip_bit (int n , int index)
{
    return (n^(1<<index));
}
void print_all_subsets (int len)
{
    for (int i=0;i<(1<<len);++i)
    {
        print_number(i,len);
        cout<<endl;
    }
}
void get_all_submask (int mask)
{
    for (int submask =mask ;submask ;submask =(submask-1)&mask)
    {
        print_number(submask,32);
        cout<<endl;
    }

}
void intersection (ll arr [60],ll arr2 [60],ll len1,ll len2)
{

}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    /*int x = 1<<6;
    print_number(x,20);
    cout<<endl;*/
    //cout<<count_bits(x)<<endl;
    //cout<<get_bit(x,5)<<endl;
   // print_number(flip_bit(x,4),20);
   //cout<<set_bit1(x,5);
    //print_all_subsets(3);
   // cout<<endl;
   // get_all_submask(3);
   print_number(3,20);
   cout<<endl;
    print_number(5,20);
   cout<<endl;
   print_number(6,20);
   cout<<endl;
   print_number(9,20);
   cout<<endl;
   print_number(10,20);
   cout<<endl;
   print_number(185,10);
   cout<<endl;
    return 0;
}
