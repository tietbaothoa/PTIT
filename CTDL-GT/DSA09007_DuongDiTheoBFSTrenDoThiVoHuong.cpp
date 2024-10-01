#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, start, en;
int visit[1005], parent[1005];
vector<int> ke[1005];

void convert() {
    int u, v;
    for (int i = 1; i <= n; i++) {
        ke[i].clear();
    }
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}

bool BFS(int start, int end) {
    queue<int> q;
    q.push(start);
    visit[start] = 1;
    parent[start] = -1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (u == end) {
            return true;
        }
        for (int v : ke[u]) {
            if (visit[v] == 0) {
                q.push(v);
                visit[v] = 1;
                parent[v] = u;
            }
        }
    }
    return false;
}

void Print() {
    if (!BFS(start, en)) {
        cout << -1 << endl;
        return;
    }
    stack<int> st;
    int v = en;
    while (v != start) {
        st.push(v);
        v = parent[v];
    }
    st.push(start);
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m >> start >> en;
        memset(visit, 0, sizeof(visit));
        memset(parent, 0, sizeof(parent));
        convert();
        Print();
    }
    return 0;
}