#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    int n=abs(a-b)+1;
    int tong=n*(a+b)/2;
    printf("%d", tong);
}