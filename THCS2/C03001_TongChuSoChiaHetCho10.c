#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int checktong(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    if(sum%10==0) return 1;
    else return 0;
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int n;
        scanf("%d", &n);
        if(checktong(n)) printf("YES");
        else printf("NO");
        el;
    }
}