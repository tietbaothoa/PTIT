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
        for(int i=2; i<=n; i++){
            while(n%i==0){
                printf("%d ", i);
                n/=i;
            }
        }
        el;
    }
}