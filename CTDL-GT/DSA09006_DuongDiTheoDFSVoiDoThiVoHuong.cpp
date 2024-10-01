#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, start, en, visit[1005], parent[1005];
vector <int> ke[1005];

void convert(){
    int u, v;
    memset(visit, 0, sizeof(visit));
    memset(parent, 0, sizeof(parent));
    for(int i=1; i<=n; i++){
        ke[i].clear();
    }
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}

void DFS(int i){
    visit[i]=1;
    for(int j:ke[i]){
        if(visit[j]==0){
            parent[j]=i;
            DFS(j);
        }
    }
}


void solve(int start, int en){
    vector <int> path;
    DFS(start);
    while(en!=start){
        path.push_back(en);
        en = parent[en];
    }
    path.push_back(start);
    reverse(path.begin(), path.end());
    for(int x:path) cout << x << " ";
    cout << endl;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m >> start >> en;
        convert();
        solve(start, en);
    }
    return 0;
}