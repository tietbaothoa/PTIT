#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%lld\n", (long long)a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2f\n", (float)a/b);
}