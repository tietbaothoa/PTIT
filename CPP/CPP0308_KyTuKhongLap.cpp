#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int b[100000]={0};
        for(int i=0; i<s.length(); i++){
            b[s[i]]++;
        }
        for(int i=0; i<s.length(); i++){
            if(b[s[i]]==1) cout << s[i]; 
        }
        cout << endl;
    }
    return 0;
}

