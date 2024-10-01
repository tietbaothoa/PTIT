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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int count=0, sum=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                sum = a[i] + a[j];
                if(sum==k) count ++;
            }
        }
        cout << count;
        cout << endl;
    }
    return 0;
}