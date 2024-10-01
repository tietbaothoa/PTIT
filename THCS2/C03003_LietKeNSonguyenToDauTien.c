#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int nto(int n){
    if(n<2) return 0;
    for( int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int dem=0;
    int i=2;
    while(dem<n){
        if(nto(i)){
            printf("%d\n", i);
            dem++;
        }
        i++;
    }
}