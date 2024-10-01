#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int giaithua(int n){
    int sum=0;
    while(n){
        int gt=1;
        int a=n%10;
        n/=10;
        for(int i=1; i<=a; i++){
            gt*=i;
        }
        sum+=gt;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    if(giaithua(n)==n) printf("1");
    else printf("0");
}