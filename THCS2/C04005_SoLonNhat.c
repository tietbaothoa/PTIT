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
        int a[n+5];
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        int max=a[0];
        int b[1005]={};
        int index=0;
        for(int i=0; i<n; i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        for(int i=0; i<n; i++){
            if(a[i]==max){
                b[index++]=i;
            }
        }
        printf("%d\n", max);
        for(int i=0; i<index; i++){
            printf("%d ", b[i]);
        }
        el;
    }
}