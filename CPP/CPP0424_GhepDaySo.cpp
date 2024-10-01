#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int k, n;
        cin >> k >> n;
        int a[k+5][n+5];
        int b[k*n+5];
        int m=0;
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                b[m++] = a[i][j];
            }
        }
        sort(b, b+k*n);
        for(int i=0; i<k*n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}