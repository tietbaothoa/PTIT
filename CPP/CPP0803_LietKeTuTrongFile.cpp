#include<bits/stdc++.h>
using namespace std;
int a[100000]={};


int main(){
	ifstream in("DATA.in");
	int s;
	while(in >> s){
		a[s]++;
	}
	for(int i=0; i<100000; i++){
		if(a[i] != 0)cout << i << " " << a[i] << endl;
	}
	in.close();
}