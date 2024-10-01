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
        int b[100000]={0}; //khai bao mang danh dau;
        int n;
        int count=0;
        cin >> n;
        int len = s.length();
        for(int i=0; i<len; i++){
            b[s[i]]++;
        }
        for(int i=0; i<len; i++){
            if(b[s[i]]!=0){
                count ++;
                b[s[i]]=0;
            }
        }
        int k = 26 - count;
        if(k >n) cout << '0';
        else cout << '1';

        cout << endl;
    }
    return 0;
}

int a = 'A';