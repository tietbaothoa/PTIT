#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1001], ok, i;

void sinhnp(){
    int i = n-1;
    while(i>=0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i>=0) a[i]=1;
    else ok=0;
}

void innp(){
    for(int i=0; i<n; i++){
        cout << a[i];
    }
    cout << " ";
}

int main() {
    faster;
    int test;
    cin >> test;
    while(test--){
        cin >> n;
        ok=1;
        while(ok){
            innp();
            sinhnp();
        }
        cout << endl;
    }
    return 0;
}