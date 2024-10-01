#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
   int a,b;
   scanf("%d%d", &a, &b);
   for(int i=0; i<b; i++){
        if(i==0 || i==b-1){
            for(int i=0; i<a; i++)
                printf("*");
        }
        else
            for(int i=0; i<a; i++){
                if(i==0 || i==a-1) printf("*");
                else printf(" ");
            }
        el;
   }
}  