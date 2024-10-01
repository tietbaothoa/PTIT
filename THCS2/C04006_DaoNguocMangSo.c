#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int b[n+5];
    for(int i=0; i<n; i++){
        b[i]=a[n-i-1];
        printf("%d ", b[i]);
    }
}