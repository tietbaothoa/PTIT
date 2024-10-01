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
    int b[10005]={};
    int count=0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        b[a[i]]++;
        if(b[a[i]]==1) count++;
        else if(b[a[i]]>1) count--;
    }
    printf("%d\n", count);
    for(int i=0; i<10000; i++){
        if(b[i]==1){
            printf("%d ", i);
        }
    }
}