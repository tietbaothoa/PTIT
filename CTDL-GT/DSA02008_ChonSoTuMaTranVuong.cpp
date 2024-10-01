#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1005]={};
string s;

void Try(int i){
    for(char j='A'; j<='B'; j++){
        s[i] = j;
        if(i==n) {
            for(int h=1; h<=n; h++) cout << s[h];
            cout << " ";
        }
        else Try(i+1);
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        s="";
        Try(1);
        cout << endl;
    }
    return 0;
}