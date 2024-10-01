#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    map <string, int> m;
    cin.ignore();
    while (test--) {
        string s;
        getline(cin, s);
        m[s]++;
    }
    cout << m.size();
    return 0;
}