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
        int check = 0;
        for(int i=0;i<n; i++){
            cin >> a[i];
        }
        int min1 = a[0];
        for(int i=0; i<n; i++){
            if(a[i]<min1){
                min1 = a[i];
            }
        }
        int min2 = a[0];
        for(int i=0; i<n; i++){
            if(a[i]<min2 && a[i]!= min1){
                check = 1;
                min2 = a[i];
            }
        }
        if(!check) cout << "-1";
        else cout << min1 << " "<< min2;
        cout << endl;
    }
    return 0;
}