#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int n;
        scanf("%d", &n);
        long long a[n+5];
        for(int i=0; i<n; i++){
            scanf("%lld", &a[i]);
        }
        int check=1;
        for(int i=0; i<=n/2; i++){
            if(a[i]!=a[n-i-1])
                check=0;
                break;
        }
        if(check) printf("YES");
        else printf("NO");
        el;
    }
}