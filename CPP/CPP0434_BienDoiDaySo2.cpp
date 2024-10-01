#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n+5];
        int b[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            if(i==0){
                b[i] = a[i]*a[i+1];
            }
            else if(i==n-1){
                b[i] = a[i]*a[i-1];
            }
            else{
                b[i] = a[i-1]*a[i+1];
            }
        }
        for(int i=0; i<n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}