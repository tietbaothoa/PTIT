#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void xuly(){
    stack <string> st;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='+' || s[i] == '-' || s[i]=='*' || s[i]=='/'){
            string fi = st.top(); st.pop();
            string se = st.top(); st.pop();
            string tmp = s[i] + se + fi;
            st.push(tmp);
        }
        else st.push(string(1,s[i]));
    }
    cout << st.top()<< endl;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        xuly();
        cout << endl;
    }
    return 0;
}