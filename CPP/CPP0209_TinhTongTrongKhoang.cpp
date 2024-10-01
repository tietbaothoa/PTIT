#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m, l, r;
        cin >> n >> m;
        int a[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<m; i++){
            int sum =0;
            cin >> l >> r;
            for(int j=l-1; j<r; j++){
                sum+=a[j];
            }
            cout << sum << endl;
        }
    }
    return 0;
}