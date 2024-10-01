#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int UCLN(int a, int b){
    int m=a, n=b;
    while(n){
        int tmp=m%n;
        m=n;
        n=tmp;
    }
    return m;
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(UCLN(a, b)== UCLN(c,d)) printf("YES");
        else printf("NO");
        el;
    }
}