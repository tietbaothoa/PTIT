#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k, check=0;
        cin >> n >> k;
        int a[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int low=0, high = n-1;
        int mid = (low+high)/2;
        while(low<=high){
            if(k == a[mid]){
                res = mid;
                check =1;
                break;
            }
            else if(k>a[mid]){
                low = mid + 1;
            }
            else if(k<a[mid]){
                high = mid - 1;
            }
            mid = (low + high)/2;
        }
        if(check) cout << mid +1;
        else cout << "NO";
        cout << endl;
    }
    return 0;
}