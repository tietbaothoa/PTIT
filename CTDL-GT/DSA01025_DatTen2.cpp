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
        char a[k+5];
        int check =1;
        for(int i=0; i<k; i++){
            a[i] = 'A'+i;
        }
        while(check){
            for(int i=0; i<k; i++){
                cout << a[i];
            }
            cout << endl;
            int i =k-1;
            while(i>=0 && a[i]==n-k+i+'A') i--;
            if(i>=0){
                a[i] = a[i] + 1;
                for(int j=i+1; j<k; j++){
                    a[j] = a[i]+j-i;
                }
            }
            else check =0;
        }
        cout << endl;
    }
    return 0;
}