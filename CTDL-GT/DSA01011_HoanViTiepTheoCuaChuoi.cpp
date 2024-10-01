#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int t;
        cin >> t;
        string s;
        cin >> s;
        int n = s.length();
        int i =  n-2;
        int check = 0;
        while(i>=0 &&  s[i]>=s[i+1]) i--;
        if(i>=0){
            int k = n-1;
            while (s[i]>=s[k]) k--;
            swap(s[i], s[k]);
            int l=i+1, r  = n-1;
            while(l<r){
                swap(s[l], s[r]);
                l++; r--;
            }
            check  = 1;
        }
        cout << t << " ";
        if(check) cout << s;
        else cout << "BIGGEST";
        cout << endl;
    }
    return 0;
}