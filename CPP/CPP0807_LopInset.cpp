#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    ifstream in("DATA.in");
    int m, n, x;
    in >> m >> n;
    set <int> a, b;
    map <int, int> mp; //1 là khoa, 2 la gia tri cua khoa;
    for(int i=0; i<m; i++){
        in >> x;
        a.insert(x);
    }
    for(int i=0; i<n; i++){
        in >> x;
        b.insert(x);
    }
    for(auto x:a) mp[x]++;
    for(auto x:b) mp[x]++;
    for(auto x: mp){
        if(x.second == 2){
            cout << x.first << " ";
        }
    }
    return 0;
}