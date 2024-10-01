#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

long long UCNN(long long a, long long b){
    // int a1=a, b1=b;
    while(b!=0){
        int tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int main() {
    long long a,b;
    scanf("%lld%lld", &a, &b);
    printf("%lld", UCNN(a,b));
    el;
    printf("%lld", a*b/UCNN(a,b));
}