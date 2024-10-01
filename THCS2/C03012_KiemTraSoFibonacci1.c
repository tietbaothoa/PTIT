#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int KtraFibo(int n){
    int f1=0;
    int f2=1;
    if(n==0 || n==1) return 1;
    else{
        for(int i=0; i<50; i++){
            int t=f1+f2;
            f1=f2;
            f2=t;
            if(n==t){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if(KtraFibo(n)) printf("1");
    else printf("0");
    el;            
}