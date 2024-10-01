#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


string replace(string ex){
    stack <int> stk;
    string result = "";

    for(char c : ex){
        if(c == '(' ){
            stk.push(0);
            result += "0"
        }
    }

}

int main() {
    faster;
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string ex;
        getline(cin, ex);
        cout << replace(ex) << endl;
    }
    return 0;
}
