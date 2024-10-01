#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int m, n;
        cin >> m >> n;
        int a[m+5][n+5];
        int b[m*n+5]={0};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        int hang = m-1, cot =n-1, d=0, count=0;
        while(count < m*n){
            for(int i=d; i<=cot; i++) b[count++] = a[d][i];
            for(int i=d+1; i<=hang; i++) b[count++] = a[i][cot];
            for(int i=cot-1; i>=d; i--) b[count++] = a[hang][i]; 
            for(int i=hang-1; i>d; i--) b[count++] = a[i][d]; 
            d++; hang--; cot--;
        }
        for(int i=0; i<n*m; i++){
            cout << b[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}