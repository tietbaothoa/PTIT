#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int tongchuso(long long n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    if(sum%2!=0) return 1;
    else return 0;
}

int TachChuSo(long long n){
    int a[20];
    int index=0;
    while(n){
        a[index++]=n%10;
        n/=10;
    }
    for(int i=0; i<index; i++){
        if(a[i]%2==0 || a[i]!=a[index-i-1]) return 0;
    }
    return 1;
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        long long n;
        scanf("%lld", &n);
        if(tongchuso(n) && TachChuSo(n)) printf("YES");
        else printf("NO");
        el;
    }
}