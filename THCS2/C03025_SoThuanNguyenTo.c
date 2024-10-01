#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int TachChuSo(int n){
    while(n){
        int a=n%10;
        n/=10;
        if(a!=2 && a!=3 && a!=5 && a!=7) return 0;
    }
    return 1;
}

int KtraSnt(int n){
    if(n<2) return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}

int TinhTongChuSo(int n){
    int sum=0;
    while(n){
        int a=n%10;
        sum+=a;
        n/=10;
    }
    if(KtraSnt(sum)) return 1;
    else return 0;
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int x, y;
        scanf("%d%d", &x, &y);
        int count=0;
        for(int i=x; i<=y; i++){
            if(TachChuSo(i) && KtraSnt(i) && TinhTongChuSo(i)) count++;
        }
        printf("%d", count);
        el;
    }
}