#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int countC=0, countL=0;
    while(n){
        int a=n%10;
        if(a%2==0) countC++;
        else countL++;
        n/=10;
    }
    printf("%d %d", countL, countC);
}