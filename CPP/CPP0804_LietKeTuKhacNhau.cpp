#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream in("VANBAN.in");
	string s;
	set <string> m;
	while(in >> s){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		m.insert(s);
	}
	in.close();
	for(auto x:m){
		cout << x << endl;
	}
}