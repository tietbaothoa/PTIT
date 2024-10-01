#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long fibo(long long n){
    if(n==0 || n==1) return 1;
    long long f0=0, f1=1, fn=0;
    while(fn<=n){
        fn= f0+f1;
        f0 = f1;
        f1 = fn;
        if(fn == n) return 1;
    }
    return 0;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        if(fibo(n)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}