#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int SoUuThe(long long n){
    int countC=0, countL=0;
    if(n%2==0) return 0;
    while(n){
        int a=n%10;
        n/=10;
        if(a%2==0) countC++;
        else countL++;
    }
    if(countC<countL) return 1;
    else return 0;
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        long long n;
        scanf("%lld", &n);
        if(SoUuThe(n)) printf("YES");
        else printf("NO");
        el;
    }
}