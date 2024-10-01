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
        int a,b;
        scanf("%d%d", &a, &b);
        while(b!=0){
            int tmp=a%b;
            a=b;
            b=tmp;
        }
        printf("%d", a);
        el;
    }
}