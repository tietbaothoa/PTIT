#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int snt(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int n;
        scanf("%d", &n);
        int a[n+5];
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
            if(snt(a[i])) printf("%d ", a[i]);
        } 
        el;
    }
}