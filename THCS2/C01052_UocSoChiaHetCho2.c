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
        int count=0;
        if(n%2==0) count++;
        for(int i=2; i<=sqrt(n); i++){
            if(i%2==0 && n%i==0) count++;
            if(n%i==0 && i*i!=n && i!=1 && (n/i)%2==0) count++;
        }
        printf("%d", count);
        el;
    }
}