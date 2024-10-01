#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m;

void convert(){
    int u, v;
    int a[1005][1005]={0};
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        a[u][v] = 1;
        a[v][u] = 1;
    }
    for(int i=1; i<=n; i++){
        cout << i << ": ";
        for(int j=1; j<=n; j++){
            if(a[i][j]==1) cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> m;
        convert();
        cout << endl;
    }
    return 0;
}