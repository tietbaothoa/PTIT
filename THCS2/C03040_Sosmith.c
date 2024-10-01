#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int TongChuSo(int n){
    int sum=0;
    while(n){
        int a=n%10;
        sum+=a;
        n/=10;
    }
    return sum;
}

int TongUocSo(int n){
    int sum =0;
    while(n%2==0){
        sum+=2;
        n/=2;
    }
    for(int i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            sum+=TongChuSo(i);
            n/=i;
        }
    }
    if(n>1) sum+=TongChuSo(n);
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    if(TongChuSo(n) == TongUocSo(n)) printf("YES");
    else printf("NO");
}