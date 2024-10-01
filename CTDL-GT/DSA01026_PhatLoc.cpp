#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int ktra(int n, int a[]){
    if(n<6) return 0;
    if(a[0] !=8 || a[n-1]!=6) return 0;
    for(int i=0; i<n; i++){
        if(a[i]==8 && a[i+1]==8) return 0;
        if(a[i]==6 && a[i+1]==6 && a[i+2]==6 &&a[i+3]==6) return 0;
    }
    return 1;
}

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0; i<n; i++){
        a[i] = 6;
    }
    int check = 1;
    while(check){
        if(ktra(n, a)){
            for(int i=0; i<n; i++){
                cout << a[i];
            }
            cout << endl;
        }
        int i = n-1;
        while(i>=0 && a[i]==8){
            a[i] = 6;
            i--;
        }
        if(i>=0) a[i] = 8;
        else check = 0;
    }
    return 0;
}