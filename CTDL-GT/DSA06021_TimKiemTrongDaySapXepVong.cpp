#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void timkiem(int n, int k){
    int a[n+5];
    int solve;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(k==a[i]) solve = i;
    }
    cout << solve + 1;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        timkiem(n, k);
        cout << endl;
    }
    return 0;
}