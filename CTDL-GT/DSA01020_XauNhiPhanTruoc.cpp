#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string a;
        cin >> a;
        int n = a.length();
        // for(int i=n-1; i>=0; i--){
        //     if(a[i]=='1'){
        //         a[i]='0';
        //         for(int j=i+1; j<=n-1; j++){
        //             a[j]='1';
        //         }
        //         break;
        //     }
        // }
        int i = n-1;
        while(i>=0 && a[i]=='0'){
            a[i--] = '1';
        }
        if(i>=0) a[i] ='0';
        cout << a;
        cout << endl;
    }
    return 0;
}