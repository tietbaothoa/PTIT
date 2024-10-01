#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k, a[105]={};
set <string> s;
string st[105];
set <string> s2;
void Result(){
    for(int i=1; i<=k; i++){
        cout << st[a[i]] << " ";
    }
    cout << endl;
}

void Try(int i){
    for(int j=a[i-1]+1; j<=n-k+i; j++){
        a[i] = j;
        if(i==k) Result();
        else Try(i+1);
    }
}

int main() {
    faster;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        string x;
        cin >> x;
        s.insert(x);
    }
    n = s.size();
    int i =1;
    for(auto x:s){
        st[i++] = x;
    }
    Try(1);
    return 0;
}