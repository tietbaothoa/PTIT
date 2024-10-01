#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int dem, n, a[105]={},  Xuoi[105]={}, Nguoc[105]={};

void Try(int i){
    for(int j=1; j<=n; ++j){
        if(a[j]==0 && Xuoi[i-j+n]==0 && Nguoc[i+j-1]==0){
            a[j]=1;
            Xuoi[i-j+n]=1;
            Nguoc[i+j-1]=1;
            if(i==n){
                dem++;
            }
            else Try(i+1);
            a[j]=0;
            Xuoi[i-j+n]=0;
            Nguoc[i+j-1]=0;
        }
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        dem = 0;
        cin >> n;
        Try(1);
        cout << dem << endl;
    }
    return 0;
}

ssh root@103.15.91.95
yrnOuAmMDilzfbZY6nwn