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
        int i = s.size()-1;
        while(i>=0 && s[i]=='1'){
            s[i]='0';
            i--;
        }
        if(i>=0){
            s[i]='1';
        }
        else{
            cout << '0';
        }
        for(int i=0; i<s.size(); i++){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}