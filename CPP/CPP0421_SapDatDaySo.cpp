#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        long long a[n+5], b[n+5]={};
        for (long long i = 0; i < n; i++){
            cin >> a[i];
            b[i]=-1;
        }
        for (long long i = 0; i < n; i++){
            for(long long j=0; j<n; j++){
                if(a[j]==i){
                    b[i]=i;
                }
            }
        }
        for(long long i = 0; i < n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
