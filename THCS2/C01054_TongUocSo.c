#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    long long sum=0;
    while (test--) {
        int n;
        scanf("%d", &n);
        while(n%2==0){
            sum+=2;
            n/=2;
        }
        for(int i=3; i<=sqrt(n); i+=2){
            while(n%i==0){
                sum+=i;
                n/=i;
            }
        }
        if(n>1) sum+=n;
    }
    printf("%lld", sum);
    el;
}
// #include <stdio.h>
// typedef long long ll;
// const int maxx = 2e6+5;
 
// ll savesum[2000005]={0};
// ll check[2000005] = {0};
// void SangNguyenTo(){
// 	for(int i=2;i<=maxx/2;i++){
// 		if (!check[i]){
// 			for(int j=i*2;j<=maxx;j+=i){
// 				check[j]=1;
// 				int tmp = j;
// 				while(tmp%i==0){
// 					savesum[j]+=i;
// 					tmp/=i;
// 				} 	
// 			}
// 		}
// 	}
// }

// int main(){
// 	SangNguyenTo();
//     int test;
// 	scanf("%d", &test);
//     ll res=0;
// 	while(test--){
// 		ll n;
// 	    scanf("%lld", &n);
// 		if (n <= 1) 
//             continue;
// 		if (savesum[n] == 0)
// 			res+=n;	
// 		else
// 			res += savesum[n];
// 	}
// 	printf("%lld", res);
// 	return 0;
// }

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int sum=0;
    while(n%2==0){
        sum+=2;
        n/=2;
    }
    for(int i=3; i<=sqrt(n); i+=2){
        sum+=i;
        n/=i;
    }
    if(n>1) sum+=n;
    printf("%d", sum);
}