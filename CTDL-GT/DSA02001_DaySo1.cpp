#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[101], b[101];

void Try(int i){
    cout << '[';
    for(int j=1; j<=n-i+1; j++){
        cout << b[j];
        if(j!=n-i+1) cout << " ";
    }
    cout << ']' << endl;
    for(int j=1; j<=n-i+1; j++){
        b[j] = a[j] + a[j+1];
    }
    for(int j=1; j<=n-i+1; j++) a[j] = b[j];
    if(i<n) Try(i+1);
    else return;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        for(int i=1; i<=n; i++){
            b[i] = a[i];
        }
        Try(1);
    }
    return 0;
}