#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int sum1=0, sum2=0;
        for(int i=0; i<s.length(); i++){
            if(i%2==0){
                sum1+=s[i]-'0';
            }
            else{
                sum2+=s[i]-'0';
            }
        }
        if((sum1-sum2)%11==0) cout << '1';
        else cout << '0';
        cout << endl;
    }
    return 0;
}