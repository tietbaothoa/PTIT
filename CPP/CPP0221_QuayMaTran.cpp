#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void xuly(int a[100][100],int kq[100][100],int m,int n){
    int p=0 ,count=0, hang = n-1, cot = m-1;
    int i, j;
    while(count<n*m){
        if(count == n*m-1){
            kq[p][p] = a[p][p];
            break;
        }
        for(int i=p+1; i<=cot; i++){
            kq[p][i] = a[p][i-1];
            count ++;
        }
        for(int i=p+1; i<=hang; i++){
            kq[i][cot] = a[i-1][cot];
            count++;
        }
        for(int i=cot-1; i>=p; i--){
            kq[hang][i] = a[hang][i+1];
            count++;
        }  
        for(int i=cot; i>=p; i--){
            kq[i][p] = a[i+1][p];
            count ++;
        }
        p++; hang--; cot--;
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n>> m;
        int a[100][100];
        int kq[100][100];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        xuly(a, kq, n, m);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << kq[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}