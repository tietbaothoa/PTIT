#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a=1;
    for(int i=0; i<n; i++){
        if(i==0 || i==1 || i==n-1){
            for(int j=0; j<a; j++) printf("*");
            a++;
        }
        else{
            for(int j=0; j<a; j++){
                if(j==0 || j==a-1) printf("*");
                else printf(".");
            }
            a++;
        }
        el;
    }
}