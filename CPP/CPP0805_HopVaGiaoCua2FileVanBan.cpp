#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream data1("DATA1.in");
	ifstream data2("DATA2.in");
	string x;
	set <string> s1;
	set <string> s2;
	map <string, int> mp;
	while(data1 >> x){
		transform(x.begin(), x.end(), x.begin(), :: tolower);
		s1.insert(x);
	}
	data1.close();
	while(data2 >> x){
		transform(x.begin(), x.end(), x.begin(), :: tolower);
		s2.insert(x);
	}
	data2.close();
	for(auto x : s1) mp[x]++;
	for(auto x : s2) mp[x]++;
	for(auto x : mp){
		cout << x.first << " ";  
	}
	cout << endl;
	for(auto x : mp){
		if(x.second ==2){
			cout << x.first << " ";
		}
	}
}