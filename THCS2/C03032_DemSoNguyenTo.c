#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int KtraSnt(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int tong(int n){
    int sum;
    while(n){
        int a=n%10;
        n/=10;
        sum+=a;
    }
    return sum;
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int a,b;
        scanf("%d%d", &a, &b);
        int count=0;
        for(int i=a; i<=b; i++){
            if(KtraSnt(i) && KtraSnt(tong(a))){
                count++;
            }
        }
        printf("%d", count);
        el;
    }
}