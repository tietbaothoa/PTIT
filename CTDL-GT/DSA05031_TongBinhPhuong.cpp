#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, f[10002];
        cin >> n;
        f[1]=1; f[2]=2; f[3]=3;
        for(int i=4; i<=10000; i++){
            f[i]=i;
            for(int j=1; j<=sqrt(i); j++){
                f[i] = min(f[i], f[i-j*j]+1);
            }
        }
        cout << f[n];
        cout << endl;
    }
    return 0;
}
