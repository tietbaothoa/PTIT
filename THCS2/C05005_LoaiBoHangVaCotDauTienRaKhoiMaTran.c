#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    int t=0;
    while (test--) {
        t++;
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n+5][m+5];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Test %d:\n", t);
        for(int i=1; i<n; i++){
            for(int j=1; j<n; j++){
                printf("%d ", a[i][j]);
            }
            el;
        }
        el;
    }
}