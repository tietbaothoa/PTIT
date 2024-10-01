#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if(a==0 && b==0) printf("Vo so nghiem");
    else if(a==0 && b!=0) printf("Vo nghiem");
    else{
        printf("%.2lf", -(float)b/a);
    }
}