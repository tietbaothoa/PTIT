#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    string s;
    getline(cin, s);
    vector <string> v;
    stringstream ss(s);
    string tmp="";
    while(ss >> tmp){
        v.push_back(tmp);
    }
    string r;
    r+=v[v.size()-1];
    for(int i=0; i < v.size()-1; i++){
            r+= v[i].substr(0,1);
    }
    transform(r.begin(), r.end(), r.begin(), ::tolower);
    cout << r << "@ptit.edu.vn";
    return 0;
}