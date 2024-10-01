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
        int a[1001];
        for(int i=0; i<n; i++){
            a[i] = n-i;
        }
        int check = 1;
        while(check){
            for(int i=0; i<n; i++){
                cout << a[i];
            }
            int i = n-2;
            while(i>=0 && a[i]<a[i+1]) i--;
            if(i<0) check = 0;
            else{
                int k = n-1;
                while(a[k]>a[i]) k--;
                swap(a[i], a[k]);
                int l = i+1, r = n-1;
                while(l<r){
                    swap(a[l], a[r]);
                    l++; r--;
                }
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}