#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n,res=0;
        cin >> n;
        int flag=0, sum=0;
        int row[n]={};
        int col[n]={};
        int a[n+5][n+5];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                row[i]+=a[i][j];
            }
            if(row[i]>sum){
                sum = row[i];
                flag = 0;
            }
            for(int j=0; j<n; j++){
                col[i]+=a[j][i];
                
            }
            if(col[i]>sum){
                sum = col[i];
                flag = 1;
            }
        }
        if(!flag){
            for(auto x : col){
                res+=sum-x;
            }
        }
        else{
            for(auto x : row){
                res+=sum-x;
            }
        }
        cout << res;
        cout << endl;
    }
    return 0;
}