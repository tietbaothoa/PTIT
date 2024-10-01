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
        double n;
        scanf("%lf", &n);
        printf("%.15lf",1/n);
        el;
    }
}