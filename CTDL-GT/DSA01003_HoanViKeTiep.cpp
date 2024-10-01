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
            cin >> a[i];
        }
        int i = n-2;
        while(i>=0 && a[i]>a[i+1]) i--;
        if(i<0){
            for(int j=n-1; j>=0; j--) cout << a[j] << " ";
        }
        else{
            int k = n-1;
            while(a[k]<a[i]) k--;
            swap(a[k], a[i]);
            int l = i+1, r=n-1;
            while(l<r){
                swap(a[l], a[r]);
                l++; r--;
            }
        }
        for(int j=0; j<n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}