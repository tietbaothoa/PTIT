// #include <stdio.h>
// #include <math.h>
// #include <stdbool.h>
// #include <string.h>
// #include <stdlib.h>

// #define el printf("\n")

// int GiaiThua(int n){
//     int tich=1;
//     for(int i=1; i<=n; i++){
//         tich*=i;
//     }
//     return tich;
// }

// int mu(int k){
//     int tich=1;
//     for(int i=0; i<k; i++){
//         tich*=2;
//     }
//     return tich;
// }

// int main() {
//     int n, k;
//     scanf("%d%d", &n, &k);
//     if(GiaiThua(n) % mu(k)==0) printf("Yes");
//     else printf("No");
// }

#include<stdio.h>
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int dau = 0;
	for(int i =2 ; i <= n;i++){
		int t = i;
		while(t % 2 == 0){
			k--;
			t /= 2;
		}
		if(k < 1){
			dau++;
			break;
		}
	}
	if(dau) printf("Yes");
	else printf("No");
}
