#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        getline(cin, s);
        int check;
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ')') {
                st.push(s[i]);
            } else {
                check = 0;
                while (!st.empty()) {
                    char c = st.top();
                    st.pop();
                    if (c == '+' || c == '-' || c == '*' || c == '/') {
                        check = 1;
                    }
                    if (c == '(') {
                        break;
                    }
                }
            }
        }
        if (check == 0) {
            cout << "Yes";
        } else {
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}
