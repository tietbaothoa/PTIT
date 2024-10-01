#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    string s;
    vector <string> v;
    while(cin >> s){
        s[0] = toupper(s[0]);
        transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
        v.push_back(s);
    }
    transform(v.back().begin(), v.back().end(), v.back().begin(), ::toupper);
    for(int i=0; i<v.size(); i++){
        cout << v[i];
        if(i==v.size()-2){
            cout << ", ";
        }
        else cout << " ";
    }
    return 0;
}