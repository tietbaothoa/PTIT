#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a[101];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]>a[i]){
                int tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}