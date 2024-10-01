#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1005], chuaxet[1005];

int check(){
    int sum = 0;
    for(int i=1; i<n; i++){
        sum += a[i] - a[i+1];
    }
    if(sum<0) return 0;
    else return 1;
}

void hv(int i){
    for(int j=1; j<=n; j++){
        if(chuaxet[j]==0){
            chuaxet[j]=1;
            a[i]=j;
            if(i==n){
                if(check()){
                    for(int i=1; i<=n; i++){
                        cout << a[i] << " ";
                    }
                    cout << endl;
                }
            }
            else hv(i+1);
            chuaxet[j]=0;
        }
    }
}

int main() {
    faster;
    cin >> n;
    chuaxet[1005]={};
    hv(1);
    return 0;
}