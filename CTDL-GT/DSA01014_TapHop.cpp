#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k, s, a[100], dem;

void Try(int i){
    for(int j = a[i-1]+1; j<=n-k+i; j++){
        a[i] = j;
        if(i==k) {
            int t = 0;
            for(int i=1; i<=k; i++){
                t+=a[i];
            }
            if(t==s) dem++;
        } 
        else Try(i+1);
    }
}

int main() {
    faster;
    while(1){
        dem = 0;
        a[0] = 0;
        cin >> n >> k >> s;
        if(n==0 && k==0 && s==0) return 0;
        Try(1);
        cout << dem << endl;
    }
}