#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int C(int k, int n){
    if(k==0 || k==n) return 1;
    if(k==1) return n;
    return C(k-1, n-1) + C(k, n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ", C(j, i));
        }
        el;
    }
    return 0;
}