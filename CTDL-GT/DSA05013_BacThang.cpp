#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int bacthang(int n, int k){
    int M = 1e9 + 7;
    int f[100005]={};
    f[0]=1; f[1]=1;
    for(int i=2; i<=n; i++){
        for(int j=1; j<= min(i, k); j++){
            f[i] = (f[i] + f[i-j]) % M;
        }
    }
    return f[n];
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        cout << bacthang(n, k);
        cout << endl;
    }
    return 0;
}