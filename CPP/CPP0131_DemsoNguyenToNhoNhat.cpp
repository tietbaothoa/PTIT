#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void uocmin(int n){
    int k=2;
    while(1){
        if(n%k==0){
            cout << k << " ";
            break;
        }
        else k++;
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            if(i==1) cout << "1" << " ";
            else uocmin(i);
        }
        cout << endl;
    }
    return 0;
}