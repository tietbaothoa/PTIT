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
        for(int i=2; i<=n; i++){
            int count=0;
            while(n%i==0){
                count++;
                n/=i;
            }
            if(count>0)
                cout << i << " " << count << " ";
        }
        cout << endl;
    }
    return 0;
}