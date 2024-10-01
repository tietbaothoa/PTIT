#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int sum(int n){
    int sum=0;
    while(n){
        int a=n%10;
        sum+=a;
        n/=10;
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(sum(a)<=sum(b)) printf("%d %d", a, b);
    else if(sum(a)>sum(b)) printf("%d %d", b, a);
}