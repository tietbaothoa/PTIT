#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[1005], k=1;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        int check = 0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                check = 1;
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        if(!check) break;
        cout << "Buoc " << k++ << ": ";
        for(int j=0; j<n; j++){
            cout << a[j] << " " ;
        }
        cout << endl;
    }
    return 0;
}