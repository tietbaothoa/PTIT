#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool cmp(string s, string s1){
    if(s.size() == s1.size()){
        if(s>s1)
            return false;
        else    
            return true;
    }
    else
        return false;
}

string re_str(string s){
    string kq = "";
    for(int i = 0; i < s.size(); i++){
        kq = s[i] +kq;
    }
    return kq;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, d=1;
        cin >> n;
        
        queue <string> s;
        s.push("6");
        s.push("8");

        while(s.empty() == false){
            string top = s.front();
            cout << top << re_str(top) << " ";
            s.pop();
            s.push(top + "6");
            s.push(top + "8");
            d++;
            if(d>n) break;
        }
        cout << endl;
    }
    return 0;
}