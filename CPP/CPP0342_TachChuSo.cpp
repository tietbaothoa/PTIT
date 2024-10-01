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
        cin >> s;
        long long sum=0;
        string r="";
        string str="";
        for(int i=0; i<s.length(); i++){
            if('0'<=s[i] && s[i]<='9'){
                r += s[i];
            }
            else{
                str += s[i];
            }
        }
        for(int i=0; i<str.length(); i++){
            for(int j=i+1; j<str.length(); j++){
                if(str[i]>str[j]) swap(str[i], str[j]);
            }
        }
        for(int i=0; i<str.length(); i++){
            cout << str[i];
        }
        for(int i=0; i<r.length(); i++){
            sum += r[i] -'0';
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}