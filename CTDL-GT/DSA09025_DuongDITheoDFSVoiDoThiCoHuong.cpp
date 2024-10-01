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

void DFS(int i){
    stack <int> st;
    st.push(i);
    visit[i]=1;
    while(!st.empty()){
        int top=st.top();
        st.pop();
        for(int j:ke[top]){
            if(!visit[j]){
                visit[j]=1;
                st.push(top);
                st.push(j);
                parent[j]=top;
                break;
            }
        }
    }
}

void solve(){
    DFS(start);
    if(!visit[en]){
        cout << -1;
    }
    else{
        vector <int> path;
        while(en!=start){
            path.push_back(en);
            en = parent[en];
        }
        path.push_back(start);
        reverse(path.begin(), path.end());
        for(int x : path){
            cout << x << " ";
        }
    }
    
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m >> start >> en;
        convert();
        solve();
        cout << endl;
    }
    return 0;
}