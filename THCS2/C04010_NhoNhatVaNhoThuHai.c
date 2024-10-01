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
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int min1=100000;
    int min2=100000;
    for(int i=0; i<n; i++){
        if(a[i]<min1){
            min1=a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]<=min2 && a[i]!=min1){
            min2=a[i];
        }
    }
    printf("%d %d", min1, min2);
}