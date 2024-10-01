#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, visit[1005];
vector <int> ke[1005];
vector <pair<int,int>> dscanh;

void convert(){
    int u, v;
    for(int i=1; i<=n; i++) ke[i].clear();
    memset(visit, 0, sizeof(visit));
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
        dscanh.push_back({u, v});
    }
}


void dfs(int i){
    visit[i]=1;
    for(int j:ke[i]){
        if(!visit[j]) dfs(j);
    }
}

void dfs2(int u, int s, int t){
    visit[u] = 1;
    for(int j:ke[u]){
        if((u==s && j==t)  || (u==t && j == s)) continue;
        if(!visit[j]) dfs2(j, s, t);
    }
}

void canhcau(){
    int lt=0;
    memset(visit, 0, sizeof(visit));
    for(int i=1; i<=n; i++){
        if(!visit[i]){
            lt++;
            dfs(i);
        }
    }
    for(auto it :dscanh){
        int dem = 0;
        int x = it.first;
        int y = it.second;
        memset(visit, 0, sizeof(visit));
        for(int j=1; j<=n;  j++){
            if(!visit[j]){
                dem++;
                dfs2(j, x, y);
            }
        }
        if(dem > lt) cout << x << " " << y << " ";
    }
}


int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m;
        convert();
        canhcau();
        cout << endl;
    }
    return 0;
}
