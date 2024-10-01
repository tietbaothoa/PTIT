#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        long long count=1;
        for(long long i=1; i<=n; i++){
            count=(count*i)/__gcd(count,i);
        }
        cout << count << endl;
    }
    return 0;
}