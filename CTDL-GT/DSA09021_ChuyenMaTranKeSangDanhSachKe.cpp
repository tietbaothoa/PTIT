#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5][n+5];
    vector <int> ke[n+5];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                ke[i].push_back(j);
            }
        }
    }
    for(int i=1; i<=n;i++){
        for(int x:ke[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}