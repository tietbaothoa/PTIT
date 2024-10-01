#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    fstream in, out;
    in.open("PTIT.in", ios::in);
    out.open("PTIT.out", ios::out);
    string s;
    while(getline(in, s)) out << s << endl;   //doc du lieu tu tep tin;
    return 0;
    in.close();
    out.close();
    return 0;
}