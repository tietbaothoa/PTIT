#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5];
    int b[100000]={0};
    int check=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        b[a[i]]++;
    }
    for(int i=0; i<n; i++){
        if(b[a[i]]>n/2){
            check = 1;
            cout << a[i] << " ";
            b[a[i]] = 0;
        }
    }
    if(!check) cout << "-1";
    return 0;
}