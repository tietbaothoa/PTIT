#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    string s;
    vector <int> v;
    while(cin >> s){
        if(s=="push"){
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s=="pop"){
            if(!v.empty()){
                v.pop_back();
            }
        }
        else if(s=="show"){
            if(!v.empty()){
               for(int x:v) cout << x << " ";
               cout << endl;
            }
            else{
                cout << "empty";
            }
        }
    }
    return 0;
}