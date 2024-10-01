#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n, x;
        cin >> n >> x;
        long long a[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==x){
                cout << i+1 << endl;
            }
        }
        cout << endl;
    }
    return 0;
}