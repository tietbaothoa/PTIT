#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a,b,c,d;
    a=n/365;
    b=n%365;
    c=b/7;
    d=b%7;
    printf("%d %d %d", a, c, d );
}