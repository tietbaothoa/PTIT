#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int nto(int n){
    if(n<2) return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int tong(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int Fibo(int n){
    int f0=0, f1=1;
    int fn=0;
    while(fn<n){
        fn=f0+f1;
        f0=f1;
        f1=fn;
        if(n==fn) return 1;
    }
    return 0;
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    if(a<b){
        for(int i=a; i<=b; i++){
            if(nto(i) && Fibo(tong(i))) printf("%d ", i);
        }
    }
    else{
        for(int i=b; i<=a; i++){
            if(nto(i) && Fibo(tong(i))) printf("%d ", i);
        }
    }
}