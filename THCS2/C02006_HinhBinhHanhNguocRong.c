#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    for(int i=0; i<a; i++){
        if(i!=0){
            for(int j=0; j<i; j++) printf("~");
        }
        // if(i==0){
        //     for(int i=0; i<b; i++) printf("*");
        // }
        // else{
        //     for(int )
        // }
        if(i==0 || i==a-1){
            for(int j=0; j<b; j++) printf("*");
        }
        else{
            for(int j=0; j<b; j++){
                if(j==0 || j==b-1){
                    printf("*");
                }
                else printf(".");
            }
        } 
        el;
    }
}