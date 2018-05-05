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
vector < vii > ans ;
vii cur  ;
char arr [5][3];
int cnt=0;
bool valid (int x ,int y)
{
    return(x<5&&y<3&&x>=0 &&y>=0);
}
void back_track(int r, int c)
{
    if (arr[r][c]=='E')
    {
        cnt++;
        ans.push_back(cur);
        return;
    }
    if (arr [r][c]=='#')
        return ;

    int dx []={0,1,0,-1};
    int dy []={1,0,-1,0};
    for (int i=0;i<4;i++)
    {
        int nr = r+dx[i];
        int nc = c+dy[i];
        if (valid(nr ,nc)&&(arr[nr][nc]=='.' || arr[nr][nc]=='E'))
        {
            if (arr[nr][nc] != 'E')
                arr[nr][nc]='x';
            cur.push_back(make_pair(nr,nc));

            back_track(nr,nc);

            if (arr[nr][nc]=='x')
                arr[nr][nc]='.';
            cur.pop_back();
        }
    }
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n,c;
    for (int i=0;i<5;i++)
        for (int j=0;j<3;j++)
        {
            cin >>arr[i][j];
            if (arr[i][j]=='S')
            {
                n=i;c=j;
            }
        }
    back_track(n,c);
    for (int i=0;i<ans.size();i++)
    {
        for (int j=0;j<ans[i].size();j++)
        {
            cout<<"("<<ans[i][j].first<<" , "<<ans[i][j].second<< ") ";
        }
        cout<<endl;
    }
    cout<<"number of passes is = "<<cnt;
    return 0;
}
