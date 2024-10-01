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
        long long count=0;
        long long dd=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ' || s[i]=='\n' || s[i] == '\t') dd=0;
            else if(dd==0){
                count ++;
                dd=1;
            }
        }
        cout << count;
        cout << endl;
    }
    return 0;
}