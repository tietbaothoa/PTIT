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
        int dem[1005]={};
        for(int i=1; i<=m; i++){
            int h, k;
            cin >> h >> k;
            dem[h]++;
            dem[k]++;
        }
        int k = 0;
        for(int i=1; i<=n; i++){
            if(dem[i]%2==1){
                k++;
            }
        }
        if(k==0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}