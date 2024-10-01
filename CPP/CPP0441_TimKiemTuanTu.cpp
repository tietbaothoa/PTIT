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
        int a[n+5];
        int check=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]==k){
                check=1;
                cout << i+1;
                break;
            }
        }
        if(!check) cout << "-1";
        cout << endl;
    }
    return 0;
}