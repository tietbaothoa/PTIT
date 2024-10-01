#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int nto(int n){
    if(n<2) return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if(n>=2) printf("2\n");
    for(int i=3; i<=n; i++){
        if(nto(i)) printf("%d\n", i);
    }
}