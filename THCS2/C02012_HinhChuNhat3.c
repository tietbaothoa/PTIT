#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    for(int i=1; i<=a; i++){
        int x=i;
        for(int j=1; j<=b; j++){
            if(j<=i-1) printf("%d", x--);
            else printf("%d", x++);
        }
        el;
    }
}