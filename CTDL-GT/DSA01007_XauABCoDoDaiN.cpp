#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        string s;
        for(int i=0; i<n; i++){
            s[i] = 'A';
        }
        int check = 1;
        while(check){
            for(int i=0; i<n; i++){
                cout << s[i];
            }
            int i = n-1;
            while(i>=0 && s[i]=='B'){
                s[i] = 'A';
                i--;
            }
            if(i<0) check = 0;
            else{
                s[i]='B';
                cout << ",";
            } 
        }
        cout << endl;
    }
    return 0;
}