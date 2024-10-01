#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, start;
vector <int> ke[1005];
int visit[1005];

void convert(){ 
    for (int i = 1; i <= n; i++)
        ke[i].clear();
    memset(visit, 0, sizeof(visit));
    int u, v;
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}

void BFS(int i){
    queue <int> q;
    q.push(i);
    visit[i]=1;
    while(!q.empty()){
        int top = q.front();
        cout << top << " ";
        q.pop();
        for(int j:ke[top]){
            if(visit[j]==0){
                q.push(j);
                visit[j]=1;
            }
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
        BFS(start);
        cout << endl;
    }
    return 0;
}

