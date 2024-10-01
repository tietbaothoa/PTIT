#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    string str;
    vector <string> v;
    getline(cin, str);
    stringstream ss(str);
    string tmp="";
    while(ss >> tmp){
        v.push_back(tmp);
    }
    string word;
    cin >> word;
    for(int i=0; i<v.size(); i++){
        if(v[i]!=word) cout << v[i] << " ";
    }
    return 0;
}