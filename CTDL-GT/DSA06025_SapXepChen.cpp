#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[1005], k=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        int j= i;
        while(j>0 && a[j] < a[j-1]){
            int tmp = a[j];
            a[j] = a[j-1];
            a[j-1] = tmp;
            j--;
        }
        cout << "Buoc " << k++ << ": ";
        for(int j=0; j<=i; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
