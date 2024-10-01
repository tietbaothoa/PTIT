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
        int a=n%10;
        int b;
        while(n){
            b=n%10;
            n/=10;
        }
        if(a==b) printf("YES");
        else printf("NO");
        el;
    }
}