#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string s;
int len;
string a="";
int chuaxet[200] = {};

void Result(){
    for(int i=0; i<len; i++){
        cout << a[i];
    }
    cout << " ";
}

void Try(int i){
    for(int j=0; j<len; j++){
        if(chuaxet[j]==0){
            a[i] = s[j];
            chuaxet[j] = 1;
            if(i == len-1) Result();
            else Try(i+1);
            chuaxet[j] = 0;
        }
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> s;
        len = s.length();
        Try(0);
        cout << endl;
    }
    return 0;
}

