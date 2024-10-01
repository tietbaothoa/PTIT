#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int m,n;
    scanf("%d%d", &m, &n);
    int a[m+5][n+5];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }
    int b[n+5][m+5];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            b[j][i]=a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", b[i][j]);
        }
        el;
    }
}