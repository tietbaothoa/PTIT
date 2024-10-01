#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int n;
        scanf("%d", &n);
        long long f1=1, f2=1;
        long long fn;
        for(int i=0; i<n-2; i++){
            fn=f1+f2;
            f1=f2;
            f2=fn;
        }
        if(n==1 || n==2) printf("1");
        else printf("%lld", fn);
        el;
    }
}