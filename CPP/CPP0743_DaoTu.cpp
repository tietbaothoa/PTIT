#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin , s);
		stringstream ss(s);
		string word;
		vector <string> v;
		while(ss >> word){
			v.push_back(word);
		}
		for(int i=v.size()-1; i>=0; i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}