#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, visit[1005];
vector <int> ke[1005];

void BFS(int i){
    queue <int> q;
    q.push(i);
    visit[i]=1;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(int j:ke[top]){
            if(visit[j]==0){
                visit[j]=1;
                q.push(j);
            }
        }
    }
}

void lienthongmanh(){
    int count=0;
    for(int i=1; i<=n; i++){
        if(visit[i]==0){
            count++;
            BFS(i);
        }
    }
    if(count==1) cout << "YES";
    else cout << "NO";

}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
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
        lienthongmanh();
        cout << endl;
    }
    return 0;
}