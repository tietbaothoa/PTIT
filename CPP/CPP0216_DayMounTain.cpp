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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int l, r;
        cin >> l >> r;
        int dem = 0;
        for(int i=l; i<r; i++){
            if(dem==0){
                if(a[i+1]<a[i]) dem++;
            }
            else if(dem==1){
                if(a[i+1]>a[i]) dem++;
            }
            else break;
        }
        if(dem==0 || dem==1) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}