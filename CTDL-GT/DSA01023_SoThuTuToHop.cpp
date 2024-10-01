#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int ktra(int k, int a[], int b[]){
    for(int i=0; i<k; i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int a[k+5], b[k+5];
        for(int i=0; i<k; i++){
            a[i] = i+1;
        }
        for(int i=0; i<k; i++){
            cin >> b[i];
        }
        int check = 1, dem =1;
        while (check){
            if(ktra(k, a, b)){
                cout << dem;
                break;
            }
            int i = k-1;
            while(i>=0 && a[i]==n-k+i+1) i--;
            if(i>=0){
                a[i] = a[i]+1;
                for(int j=i+1; j<k; j++) a[j] = a[j-1]+1;
            }
            else check = 0;
            dem++;
        }
        cout << endl;
    }
    return 0;
}