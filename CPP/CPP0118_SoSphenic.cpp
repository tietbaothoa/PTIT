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
        int i=2, count = 0;
        int check=0;
        while(n>1 && i<=n){
            int dem=0;
            while(n%i==0){
                count ++;
                dem ++;
                if(dem>1){
                    check=1;
                    break;
                }
                n/=i;
            }
            i++;
        }
        if(count == 3 && check==0) cout << "1";
        else cout << "0";
        cout << endl;
    }
    return 0;
}