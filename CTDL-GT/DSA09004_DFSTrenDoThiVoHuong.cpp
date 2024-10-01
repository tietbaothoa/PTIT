#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, start;
int a[1005][1005], visit[1005];

void convert(){
    memset(a, 0, sizeof(a));
    memset(visit, 0, sizeof(visit));
    int u,v;
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        a[u][v]=1;
        a[v][u]=1;
    }
}

void DFS(int i){
    cout << i << " ";
    visit[i]=1;
    for(int j=1; j<=n; j++){
        if(visit[j]==0 && a[i][j]==1){
            DFS(j);
        }
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m >> start;
        convert();
        DFS(start);
        cout << endl;
    }
    return 0;
}