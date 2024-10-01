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
        for(int j=0; j<b; j++) printf("*");
        el;
    }
}