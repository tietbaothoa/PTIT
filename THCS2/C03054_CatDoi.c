#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int TachDoi(long long n, char a[]){
    int index=0;
    while(n){
        int t=n%10;
        n/=10;
        if(t!=0 && t!=1 && t!=8 && t!=9){
            printf("INVALID");
            return 0;
        } 
        else{
            if(t==0) a[index++]=0;
            else if(t==1) a[index++]=1;
            else if(t==8) a[index++]=0;
            else if(t==9) a[index++]=0;
        }
    }
    int check=0;
    for(int i=index-1; i>=0; i--){
        if(a[i]!=0){
            check=1;
            for(int j=i; j>=0; j--){
                printf("%d", a[j]);
            }
        }
    }
        if(check==0) printf("INVALID");
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        char a[1005];
        long long n;
        scanf("%lld", &n);
        TachDoi(n, a);
        el;
    }
}

// #include<stdio.h>
// int main(){
// 	int t;
// 	scanf("%d", &t);
// 	while(t--){
// 		long long n, a[20], x = 0, dem = 0, b[20];
// 		scanf("%lld", &n);
// 		while(n){
// 			a[x++] = n%10;
// 			n /=10;
// 		}
// 		int dau = 0;
// 		for(long long i = 0; i < x;i++){
// 		if(a[i] == 1) dau = 1;
// 		if(a[i] == 8 || a[i] == 9) a[i] = 0;
// 		else if(a[i] != 1 && a[i] != 8 && a[i] != 9 && a[i] != 0){
// 			dau = 0;
// 			break;
// 		} 
// 		}
// 		if(dau){
// 			int d = 0;
// 			for(long long i = x-1; i >= 0;i--){
// 				if(a[i] == 1) d= 1;
// 				if(d) printf("%lld", a[i]);
// 			} printf("\n");
// 		}
// 		else printf("INVALID\n");
// 	}
	
// }
