#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int Ktrasnt(int n){
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
    int a[n+5];
    int count=0;
    int b[n+5];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(Ktrasnt(a[i])){
            b[count++]=a[i];
        } 
    }
    printf("%d ", count);
    for(int i=0; i<count; i++){
        printf("%d ", b[i]);
    }
}