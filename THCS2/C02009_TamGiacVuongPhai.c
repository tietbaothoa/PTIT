#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a=n-1;
    for(int i=0; i<n; i++){
        for(int i=0; i<a; i++) printf("~");
        for(int i=0; i<n-a; i++) printf("*");
        a--;
        el;
    }
    el;
}