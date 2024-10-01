#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    double c;
    scanf("%lf", &c);
    printf("%.2lf", (c*9/5)+32);
}