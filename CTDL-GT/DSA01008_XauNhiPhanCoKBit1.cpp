#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int kbit1(int n, int k, int a[]){
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i]==0) count++;
    }
    if(count!=k) return 0;
    else return 1;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int check = 1;
        int a[n+5];
        for(int i=0; i<n; i++){
            a[i] = 0;
        }
        while(check){
            if(kbit1(n, k, a)){
                for(int i=0; i<n; i++){
                    cout << a[i];
                }
                cout << endl;
            }
            int i = n-1;
            while(i >= 0 && a[i]==1){
                a[i]=0;
                i--;
            }
            if(i<0) check =0;
            else a[i] = 1;
        }
    }
    return 0;
}