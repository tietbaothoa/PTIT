#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void phantulonhon(int a[], int n){
    stack <int> st;
    int R[n+5];
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top() <= a[i]){
            st.pop();
        }
        if(st.empty()) R[i] =  -1;
        else R[i] = st.top();
        st.push(a[i]);
    }
    for(int i=0; i<n; i++) cout << R[i]<< " ";
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n+5];
        for(int i=0; i<n; i++) cin >> a[i];
        phantulonhon(a, n);
        cout << endl;
    }
    return 0;
}