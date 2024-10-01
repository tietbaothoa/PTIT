#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        int a[m+5][m+5]={};
        for(int i=1; i<=m; i++){
            int u, v;
            cin >> u >> v;
            a[u][v]=1;
        }
        for(int i=1; i<=n; i++){
            cout << i << ": ";
            for(int j=1; j<=n; j++){
                if(a[i][j]==1)
                    cout << j << " ";
            } 
            cout << endl;
        }
    }
    return 0;
}