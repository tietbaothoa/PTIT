#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

tang(string s){
    for(int i=5; i<s.size()-2; i++){
        if(s[i]>=s[i+1]) return 0;
    }
    return 1;
}
bang(string s){
    for(int i=5; i<s.size()-2; i++){
        if(s[i]!=s[i+1]) return 0;
    }
    return 1;
}

dk3(string s){
    if(s[5] == s[6] && s[6] == s[7] && s[8]==s[9]) return 1;
    else return 0;
}

dk4(string s){
    for(int i=5; i<s.size()-1; i++){
        if(s[i]!='6' || s[i]!='8' ){
            return 0;
        }
    }
    return 1;
}

int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        cin >> s;
		s[8] = s[9], s[9] = s[10];
        if(tang(s)==1 || bang(s)==1 || dk3(s)==1 || dk4(s)==1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}