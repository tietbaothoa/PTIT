#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a;
    int b=n;
    while(n){
        a=n%10;
        n/=10;
    }
    printf("%d %d", a, b%10);
}