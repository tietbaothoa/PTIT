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
    int b[n+5];
    int c[n+5];
    int index1=0, index2=0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]&1){
            c[index2++]=a[i];
        }
        else
            b[index1++]=a[i];
    }
    for(int i=0; i<index1; i++){
        printf("%d ", b[i]);
    }
    el;
    for(int i=0; i<index2; i++){
        printf("%d ", c[i]);
    }
    el;
}