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
//typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
void print_number (int n , int len)
{
    if (!len)
        return ;
    print_number(n>>1 , len-1);
    cout<<(n&1);
}
bool get_bit (int n  , int index)
{
    return ((n>>index)&1);
}
int set_bit1( int n , int index)
{
    return (n | (1<<index));
}
int set_bit0 (int n , int index)
{
    return (n & ~(1<<index));
}
int flip_bit (int n , int index)
{
    return (n ^ (1<<index));
}
int count_bits (int mask)
{
    int count =0 ;
    while (mask)
    {
        count++;
        mask &= (mask-1);
    }
    return count;
}
void print_allsubsets (int n)
{
    for(int i=0;i<(1<<n);++i)
    {
        print_number(i,3);
        cout<<endl;
    }
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int x =850 ;
    print_number(x , 20);
    cout<<endl;
    print_number(x-1, 20);
    cout<<endl;
    print_number((x&x-1),20);
    cout<<endl;
    print_number(set_bit0(x,1),20);
    cout<<endl;
    print_number(set_bit1(x,2),20);
    cout<<endl;
    print_number(flip_bit(x,5),20);
    cout<<endl;
    cout<<get_bit(x,1);
    cout<<endl;
    cout <<count_bits(x);
    cout<<endl;
    cout<<__builtin_popcount (x);
    cout<<endl;
    print_allsubsets(3);
    cout<<(1ll<<6);
    cout<<endl;

    return 0;
}
