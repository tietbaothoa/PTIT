#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a[n+5];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int k;
    scanf("%d", &k);
    for(int i=n-k; i<n; i++){
        printf("%d ", a[i]);
    }
    for(int i=0; i<n-k; i++)
        printf("%d ", a[i]);
}