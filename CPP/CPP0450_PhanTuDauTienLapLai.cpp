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
        int a[n+5];
        int b[100000]={0};
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int check = 0;
        for(int i=0; i<n; i++){
            b[a[i]]++;
            if(b[a[i]]>1){
                check = 1;
                cout << a[i];
                break;
            }
        }
        if(!check) cout << "-1";
        cout << endl;
    }
    return 0;
}