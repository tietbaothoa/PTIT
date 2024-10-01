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
        int b[m+5][n+5]={0};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                if(a[i][j] == 1){
                    for(int k=0; k<m; k++){
                        for(int l=0; l<n; l++){
                            if(k==i || l==j){
                                b[k][l]=1;
                            }
                        }
                    }
                }
            }
                
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout << b[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}