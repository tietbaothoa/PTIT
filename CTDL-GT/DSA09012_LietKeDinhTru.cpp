#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, visit[1005];
vector <int> ke[1005];

void convert(){
    int u, v;
    for(int i=1; i<=n; i++){
        ke[i].clear();
    }
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}

void DFS(int i, int pass){
    visit[i]=1;
    for(int j : ke[i]){
        if(visit[j]==0 && j!=pass){
            DFS(j, pass);
        }
    }
}

int lt(int i){
    int dem=0;
    for(int j=1; j<=n; j++){
        if(visit[j]==0 && j!=i){
            DFS(j, i);
            dem++;
        }
    }
    return dem;
}


void dinhtru(){
    for(int i=1; i<=n; i++){
        memset(visit, 0, sizeof(visit));
        if(lt(i)>lt(0)){
            cout << i << " ";
        }
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m;
        convert();
        dinhtru();
        cout << endl;
    }
    return 0;
}