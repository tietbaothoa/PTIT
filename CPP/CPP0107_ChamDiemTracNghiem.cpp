#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int de;
        cin >> de;
        cin.ignore();
        char s[20];
        for(int i=0; i<15; i++){
            cin >> s[i];
        }
        int count=0;
        char a[15] ={'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D' };
        char b[15] ={'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B' };
        if(de == 101){
            for(int i=0; i<15; i++){
                if(s[i] == a[i]) count++;
            }
        }
        if(de == 102){
            for(int i=0; i<15; i++){
                if(s[i] == b[i]) count++;
            }
        }
        float diem=(float(2)/float(3))*(float)count;
        cout << setprecision(2) << fixed << diem << endl;
        cout << endl;
    }
    return 0;
}