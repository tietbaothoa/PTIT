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
        getline(cin,s);
        int check=1;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1' || s[i] == '3'|| s[i] == '5'|| s[i] == '7'|| s[i] == '9'){
                check=0;
                break;
            }
        }
        for(int i=0; i<s.length(); i++){
            for(int j=s.length()-i-1; j=0; j--){
                if(s[i]!=s[j]){
                    check=0;
                    break;
                }
            }
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}