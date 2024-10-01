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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k=1;
        while(1){
            int stop=1;
            for(int i=0; i<n; i++){
                if(a[i]==k){
                    stop=0;
                    break;
                }
            }
            if(stop==1){
                cout << k;
                break;
            }
            else k++;
        }
        cout << endl;
    }
    return 0;
}