#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);
    float delta = b*b -4*a*c;
    float x1, x2;
    if(delta<0) printf("NO");
    else if(delta==0){
        x1=x2= -b/2*a;
        printf("%.2f", x1);
    }
    else{
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("%.2f %.2f", x1, x2);
    }
}