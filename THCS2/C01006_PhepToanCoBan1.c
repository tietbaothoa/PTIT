#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    if(b==0) printf("0");
    else printf("%d %d %d %.2f %d", (a+b), (a-b), (a*b), (float)a/b, a%b);
}