#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a[n+5][n+5];
    int count=0;
    int b[n*n];
    for(int i=1; i<=n*n; i++){
        b[count++]=i;
    }
    int d=0, hang=n-1, cot=n-1;
    count=0;
    while(d<=n/2){
        for(int i=d; i<=cot; i++) a[d][i]=b[count++];
        for(int i=d+1; i<=cot; i++) a[i][cot]=b[count++];
        for(int i=cot-1; i>=d; i--) a[hang][i]=b[count++];
        for(int i=hang-1; i>=d+1; i--) a[i][d]=b[count++];
        d++; hang--; cot--;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        el;
    }
}
