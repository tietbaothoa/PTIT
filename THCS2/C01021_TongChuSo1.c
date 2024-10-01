#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    printf("%d", sum);
}