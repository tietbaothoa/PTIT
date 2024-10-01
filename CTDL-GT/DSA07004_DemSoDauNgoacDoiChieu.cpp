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
        stack <char> st;
        int close=0, open=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                st.push(s[i]);
                open++;
            }
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    open--;
                }
                else{
                    st.push(s[i]);
                    close++;
                }
            }
        }
        int count;
        count = open/2 +close/2;
        count += open%2 + close%2;
        cout << count;
        cout << endl;
    }
    return 0;
}