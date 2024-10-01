#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, start, en;
vector <int> ke[1005];
int visit[1005];

void convert(){
    int u, v;
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}

void DFS(int start){
    visit[start]=1;
    if(start==en) return;
    for(int x:ke[start]){
        if(visit[x]==0){
            DFS(x);
        }
    }
}

void solve(int start, int en){
    DFS(start);
    if(visit[en]==0){
        cout << "NO";
    }
    else 
        cout << "YES";
    
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            ke[i].clear();
        }
        convert();
        int q;
        cin >> q;
        while(q--){
            memset(visit, 0, sizeof(visit));
            cin >> start >> en;
            solve(start, en);
            cout << endl;
        }
    }
    return 0;
}