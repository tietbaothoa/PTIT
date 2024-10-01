#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a[n+5];
    int index=0;
    while(n){
        a[index++]=n%10;
        n/=10;
    }
    if(a[0]!=0){
        printf("%d", a[0]);
    }
    for(int i=index-2; i>=1; i--){
        printf("%d", a[i]);
    }
    printf("%d", a[index-1]);
}