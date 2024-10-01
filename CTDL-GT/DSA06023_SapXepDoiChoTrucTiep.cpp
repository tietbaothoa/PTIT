#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5], k=1;
    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }
    for(int i=0; i<n; i++){
        int check=0;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[i]){
                check =1;
                swap(a[i], a[j]);
            }
        }
        if(check){
            cout << "Buoc "<< k++ << ": ";
            for(int j=0; j<n; j++){
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}