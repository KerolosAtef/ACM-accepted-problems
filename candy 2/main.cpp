#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int> > g, rows;
vector<int> cols;

void init(){
    g.clear();
    g.resize(n);
    for (int i=0;i<n;i++)
        g[i].resize(m);
    rows.clear();
    rows.resize(n);
    for (int i=0;i<n;i++)
        rows[i].resize(m);

    cols.clear();
    cols.resize(n);
}

int srow(int i, int j = 0){
    if(j >= m) return 0;
    if(rows[i][j]) return rows[i][j];
    return rows[i][j] = max(srow(i, j+2)+g[i][j], srow(i, j+1));
}

int solve(int i = 0){
    if(i >= n) return 0;
    if(cols[i]) return cols[i];
    return cols[i] = max(solve(i+2) + rows[i][0], solve(i+1));
}

int main(){

    //freopen("in", "r", stdin);
    cin.sync_with_stdio(0);

    while(cin >> n >> m, n || m){
        init();
        for(int i = 0 ; i < n ; ++i)
            for(int j = 0 ; j < m ; ++j)
                cin >> g[i][j];
        cout<<srow(0)<<endl;
    }


    return 0;
}
