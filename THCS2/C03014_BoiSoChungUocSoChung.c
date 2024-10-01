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
        long long a,b;
        scanf("%lld%lld", &a, &b);
        long long tich=a*b;
        while(b!=0){
            int tmp=a%b;
            a=b;
            b=tmp;
        }
        printf("%lld %lld", tich/a, a);
        el;
    }
}
