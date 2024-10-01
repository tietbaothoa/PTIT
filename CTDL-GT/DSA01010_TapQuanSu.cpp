#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int a[k+5];
        for(int i=0; i<k; i++){
            cin >> a[i];
        }
        int b[k+5];
        for(int i=0; i<k; i++){
            b[i] = a[i];
        }
        int i = k-1;
        while(i>=0 && b[i] == n-k+i+1) i--;
        if(i>=0){
            b[i] = b[i] + 1;
            for(int j= i+1; j<k; j++){
                b[j] = b[j-1]+1;
            }
        }
        set <int> s;
        for(int i=0; i<k; i++){
            s.insert(a[i]);
            s.insert(b[i]);
        }
        if(s.size()-k==0) cout << k;
        else cout << s.size()-k;
        cout << endl;
    }
    return 0;

}