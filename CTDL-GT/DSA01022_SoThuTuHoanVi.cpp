#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int ktra(int n, int a[], int b[]){
    for(int i=0; i<n; i++){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n+5], b[n+5];
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        for(int i=0; i<n; i++){
            a[i] = i+1;
        }
        int dem = 1;
        int check = 1;
        while(check){
            if(ktra(n, a, b)){
                cout << dem;
                break;
            }
            int i = n-2;
            while(i>=0 && a[i]>a[i+1]) i--;
            if(i<0) check = 0;
            else{
                int k = n-1;
                while(a[k] < a[i]) k--;
                swap(a[k], a[i]);
                int l = i+1, r = n-1;
                while(l<r){
                    swap(a[l], a[r]);
                    l++; r--;
                }
            } 
            dem++;
        }
        cout << endl;
    }
    return 0;
}