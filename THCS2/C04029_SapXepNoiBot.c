#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a[105];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        int check=0;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                check=1;
            }
        }
        if(check){
                printf("Buoc %d: ", i+1);
                for(int k=0; k<n; k++){
                    printf("%d ", a[k]);
                }
                el;
        }
    }
}