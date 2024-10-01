#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int KtraSnt(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

// int KtraSnt(int n){
//     int check=1;
//         if(n<2)
//             check=0;
//         else if(n<4)
//             check=1;
//         else if(n%2==0 || n%3==0)
//             check=0;
//         else{
//             for(int i=5; i<=sqrt(n); i+=6){
//                 if(n%i==0 || n%(i+2)==0){
//                     check=0;
//                 }
//             }
//         }
//     return check;
// }

int SoThuanNghich(int n){
    int tmp=n;
    int sum=0;
    while(tmp){
        int a=tmp%10;
        tmp/=10;
        sum=sum*10+a;
    }
    if(sum==n) return 1;
    else return 0;
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int x, y;
        scanf("%d%d", &x, &y);
        int a[10001];
        int count=0;
        for(int i=x; i<=y; i++){
            if(KtraSnt(i) && SoThuanNghich(i)){
                printf("%d ",i);
                count++;
                if(count%10==0 && count!=0) el;
            }
         }
        el;
        el;
    }
}