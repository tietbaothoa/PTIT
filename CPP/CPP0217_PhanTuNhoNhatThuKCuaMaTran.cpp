#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int a[n+5][n+5];
        int b[n*n+5] = {0};
        int m=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                b[m++]=a[i][j];
            }
        }
        for(int i=0; i<n*n; i++){
            for(int j=i+1; j<n*n; j++){
                if(b[i]>b[j]){
                    int t =b[i];
                    b[i]=b[j];
                    b[j]=t;
                }
            }
        }
        cout << b[k-1];
        cout << endl;
    }
    return 0;
}