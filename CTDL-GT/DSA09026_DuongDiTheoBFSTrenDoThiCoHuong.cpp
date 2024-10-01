#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, start, en;
vector <int> ke[1005];
int visit[1005], parent[1005];

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
    }
}

void BFS(int start){
    queue <int> q;
    visit[start]=1;
    q.push(start);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(int j : ke[top]){
            if(!visit[j]){
                q.push(j);
                visit[j]=1;
                parent[j]=top;
            }
        }
    }
}

void solve(int start, int en){
    vector <int> path;
    BFS(start);
    if(!visit[en]){
        cout << -1;
    }
    else{
        while(en!=start){
            path.push_back(en);
            en = parent[en];
        }
        path.push_back(start);
        reverse(path.begin(), path.end());
        for(int x:path) cout << x << " ";
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m >> start >> en;
        convert();
        solve(start, en);
        cout << endl;
    }
    return 0;
}