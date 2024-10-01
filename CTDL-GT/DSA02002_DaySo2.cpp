#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1005];
string s;
stack <string> st;

void Try(int i){
    s="[";
    for(int j=1; j<=n-i+1; j++){
        if(j!=n-i+1) s = s + to_string(a[j])+' ';
        else s= s + to_string(a[j]) +']'+' ';
    }
    st.push(s);
    for(int j=1; j<n-i+1; j++){
        a[j] = a[j]+a[j+1];
    }
    if(i==n) return;
    else{
        Try(i+1);
    }

}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        Try(1);
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}   