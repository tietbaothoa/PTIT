#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int count=0;
    while(n%2==0){
        n/=2;
        count++;
    }
    if(count>0) cout << "2" << " " << count << endl;
    for(int i=3; i<=sqrt(n); i+=2){
        count=0; 
        while(n%i==0){
            count++;
            n/=i;
        }
        if(count>0){
            cout << i << " "<< count << endl;
        }
    }
    if (n > 2) {
        cout << n << " " << 1 << endl;
        return 0;
    }
    return 0;
}