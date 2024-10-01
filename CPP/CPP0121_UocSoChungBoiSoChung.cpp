#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long a, b;
        cin >> a >> b;
        long long gcd = __gcd(a, b);
        long long lcm = (a*b)/gcd;
        cout << lcm << " " << gcd;
        cout << endl;
    }
    return 0;
}