#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    long long f[55]={};
    f[0]=1; f[1] = 1; f[2] = 2;
    for(int i=3; i<55; i++){
        f[i] = f[i-1] + f[i-2] +f[i-3];
    }
    while (test--) {
        int n;
        cin >> n;
        cout << f[n];
        cout << endl;
    }
    return 0;
}