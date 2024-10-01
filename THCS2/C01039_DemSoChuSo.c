#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int count=0;
    while(n){
        n/=10;
        count++;
    }
    printf("%d", count);
    
}