#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5];
    set <int> s;
    for(int i=0; i<n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    for(auto x:s) cout << x << " ";
    return 0;
}