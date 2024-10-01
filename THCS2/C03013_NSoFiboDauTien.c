#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

void KtraFibo(int n){
    int f1=0;
    int f2=1;
    printf("0 1 ");
    for(int i=0; i<n-2; i++){
        int t=f1+f2;
        f1=f2;
        f2=t;
        printf("%d ", t);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    KtraFibo(n);
    el;            
}