#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    faster;
    int test;
    cin >> test;
    vector <int> v;
    string s;
    while (test--) {
        cin >> s;
        if(s=="PUSH"){
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s =="POP"){
            if(!v.empty()){
                v.pop_back();
            }
        }
        else if(s == "PRINT"){
            if(!v.empty()){
                cout << v.back();
            }
            else cout << "NONE";
            cout << endl;
        }
    }
    return 0;
}