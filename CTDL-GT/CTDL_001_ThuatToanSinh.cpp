#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int SoTN(int n, int a[]){
    for(int i=0; i<=n/2; i++){
        if(a[i] != a[n-i-1]) return 0;
    }
    return 1;
}

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0; i<n; i++) a[i] = 0;
    int check = 1;
    while(check){
        if(SoTN(n, a)){
            for(int i=0; i<n; i++) cout << a[i] << " ";
            cout << endl;
        }
        int i = n-1;
        while(i>=0 && a[i]!=0){
            a[i] = 0;
            i--;
        }
        if(i<0) check = 0;
        else a[i] = 1;
    }
    return 0;
}