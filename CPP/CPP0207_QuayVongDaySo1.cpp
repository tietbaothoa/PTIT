#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        int a[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=m; i<n; i++){
            cout << a[i] << ' ';
        }
        for(int i=0; i<m; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int main() {
//     faster;
//     int test;
//     cin >> test;
//     while (test--) {
//         int n, m, x;
//         cin >> n >> m;
//         vector <int> a;
//         for(int i=0; i<n; i++){
//             cin >> x;
//             a.push_back(x);
//         }
//         for(int i=0; i<m; i++){
//             a.push_back(a[0]);
//             a.erase(a.begin());
//         }
//         for(int i=0; i<a.size(); i++){
//             cout << a[i] << ' ';
//         }
//         cout << endl;
//     }
//     return 0; tle
// }