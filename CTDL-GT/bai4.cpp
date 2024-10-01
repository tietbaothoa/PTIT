#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, dem, visit[1005];
vector <int> ke[1005];

void bfs(int i){
    queue <int> q;
    q.push(i);
    visit[i]=1;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(int j : ke[top]){
            visit[j]=1;
            q.push(j);
        }
    }
}

int main() {
    faster;
    cin >> n >> m;
    memset(visit, 0, sizeof(visit));
    for(int i=1; i<=n; i++){
        ke[i].clear();
    }
    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
    }
    for()

    return 0;
}