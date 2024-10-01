#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, start;
int visit[1005];
vector <int> ke[1005];

void convert(){
    int u, v;
    for(int i=1; i<=n; i++){
        ke[i].clear();
    }
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
    }
}

void BFS(int i){
    visit[i]=1;
    queue <int> q;
    q.push(i);
    while(!q.empty()){
        int top = q.front();
        cout << top << " ";
        q.pop();
        for(int j : ke[top]){
            if(visit[j]==0){
                visit[j]=1;
                q.push(j);
           }
        }
    }

}


int main() {
    faster;
    int test;
    cin >> test;
    while(test--){
        cin >>  n >> m >> start;
        memset(visit, 0, sizeof(visit));
        convert();
        BFS(start);
        cout << endl;
    }
    return 0;
}