#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

long long CheckSnt(long long n){
    if(n<2) return 0;
    else{
        for(long long i=2; i<=sqrt(n); i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int main() {
    long long n;
    scanf("%lld", &n);
    long long a[20];
    long long index=0;
    while(n){
        a[index++]=n%10;
        n/=10;        
    }
    long long b[15]={};
    for(long long i=index-1; i>=0; i--){
        if(CheckSnt(a[i])){
            b[a[i]]++;
        }
    }
    for(long long i=index-1; i>=0; i--){
        if(CheckSnt(a[i]) && b[a[i]]!=0){
            printf("%lld ", a[i]);
            printf("%lld ", b[a[i]]);
            el;
        }
        b[a[i]]=0;
    }
}