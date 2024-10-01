#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int cnt=0;
    int test;
    scanf("%d",&test);
    while (test--) {
        cnt++;
        int n, m, p;
        scanf("%d%d%d", &n, &m, &p);
        int a[n+5], b[m+5];
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);
        for(int i=0; i<m; i++)
            scanf("%d", &b[i]);
        printf("Test %d:\n", cnt);
        for(int i=0; i<p; i++) printf("%d ", a[i]);
        for(int i=0; i<m; i++) printf("%d ", b[i]);
        for(int i=p; i<n; i++) printf("%d ", a[i]);
        el;
    }
}