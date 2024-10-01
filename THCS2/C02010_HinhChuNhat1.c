#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    long long n, k;
    scanf("%lld%lld", &n, &k);
    for(long long i=1; i<=n; i++){
        if(i<=k){
            for(long long j=i; j<=k; j++) printf("%lld", j);
            for(long long j=i-1; j>=1; j--) printf("%lld", j);
            el;
        }
        else{
            printf("%lld", i);
            for(long long j=k-1; j>=1; j--) printf("%lld", j);
            el;
        }
    }
}