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
        int min = 100000;
        int sum;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                sum = a[i]+a[j];
                if(abs(sum) < abs(min)){
                    min = sum;
                }
            }
        }
        cout << min;
        cout << endl;
    }
    return 0;
}