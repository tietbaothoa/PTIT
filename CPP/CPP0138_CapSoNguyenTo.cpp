#include<bits/stdc++.h>
using namespace std;

int Nto(int n){
	if(n<2) return 0;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) return 0;
		}
	}
	return 1;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		for(int i=2; i<=n/2; i++){
			if(Nto(i) && Nto(n-i)) {
				cout << i << " " << n-i;
				break;
			}
		}
        cout << endl;
	}
}