#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int haha(int n, char a[]){
    if(a[0]!='H' || a[n-1]!='A') return 0;
    for(int i=0; i<n; i++){
        if(a[i]==a[i+1] && a[i]=='H') return 0;
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
        char a[n+5];
        for(int i=0; i<n; i++){
            a[i] = 'A';
        }
        int check = 1;
        while(check){
            if(haha(n, a)){
                for(int i=0; i<n; i++) cout << a[i];
                cout << endl;
            }
            int i = n-1;
            while(i>=0 && a[i]!='A'){
                a[i] = 'A';
                i--;
            } 
            if(i<0) check = 0;
            else a[i] = 'H';
        }
    }
    return 0;
}