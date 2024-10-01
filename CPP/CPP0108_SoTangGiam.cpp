#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int Nto(int n){
    if(n==0 || n==1) return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int mu(int n){
    int m=1;
    for(int i=0; i<n; i++){
        m*=10;
    }
    return m;
}

int tang(int n){
    int a=n;
    while(a>9){
        int b = a %10;
        a= a/10;
        int c = a%10;
        if(c >= b) return 0;
    }
    return 1;
}

int giam(int n){
    int a=n;
    while(a>9){
        int b = a %10;
        a= a/10;
        int c = a%10;
        if(c <= b) return 0;
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
        int count=0;
        for(int i=mu(n-1); i<mu(n); i++){
            if(tang(i) || giam(i)){
                if(Nto(i)) count++;
            }
            if(i%2!=0) i++;
        }
        cout << count;
        cout << endl;
    }
    return 0;
}