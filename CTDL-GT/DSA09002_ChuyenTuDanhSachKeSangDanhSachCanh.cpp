#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    cin.ignore();
    int a[n+5][n+5]={};
    for(int i=1; i<=n; i++){
        string s;
        getline(cin,  s);
        stringstream ss(s);
        int x;
        while(ss >> x){
            a[i][x]=1;
            a[x][i]=1;
        }
    }
    for(int  i=1; i<=n; i++){
        for(int  j=i+1; j<=n; j++){
            if(a[i][j]==1){
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}