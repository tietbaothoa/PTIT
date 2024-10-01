#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int Nto(int n){
    if(n<2) return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        long long count =0;
        for(int i=0; i<=sqrt(n); i++){
            if(Nto(i)) count++;
        }
        cout << count; 
        cout << endl;
    }
    return 0;
}