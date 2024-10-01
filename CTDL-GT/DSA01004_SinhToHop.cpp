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
        int t = 1;
        for(int i=0; i<k; i++){
            a[i] = t++;
        }
        int check = 1;
        while(check){
            for(int i=0; i<k; i++){
                cout << a[i];
            }
            cout << " ";
            int i = k-1;
            while(i>=0 && a[i]== n-k+i+1) i--;
            if(i>=0){
                a[i] = a[i]+1;
                for(int j=i+1; j<k; j++) a[j] = a[i] + j -i;
            }
            else check = 0;
        }
        cout << endl;
    }
    return 0;
}