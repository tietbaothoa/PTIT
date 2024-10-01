#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n+5][n+5];
        multiset <int> ms;
        for(int i=0; i<n; i++){
            set <int> s;
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                s.insert(a[i][j]);
            }
            for(int x: s){
                ms.insert(x);
            }
        }
        vector <int> u;
        int res=0;
        for(int x: ms){
            u.push_back(x);
        }
        for(int i=0; i<u.size(); i++){
            int count=1;
            while(u[i] == u[i+1]){
                count++;
                i++;
            }
            if(count == n){
                res++;
            }
        }
        cout << res ;
        cout << endl;
    }
    return 0;
}


