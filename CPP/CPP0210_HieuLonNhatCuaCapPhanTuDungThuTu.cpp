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
        int check=0;
        int max= 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[j]-a[i] > max){
                    max = a[j] - a[i];
                }
            }
        }
        if(max>0) check=1;
        if(!check) cout << "-1";
        else cout << max;
        cout << endl;
    }
    return 0;
}