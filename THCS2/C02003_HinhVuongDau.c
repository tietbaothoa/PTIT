#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(i==0 || i==n-1){
            for(int j=0; j<n; j++)
                printf("*");
        }
        else{
            for(int j=0; j<n; j++){
                if(j==0 || j==n-1) printf("*");
                else printf(".");
            }
        }
        el;
    }
}