#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int SoHoanHao(int n){
    int sum=0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            // if(i*i!=n && i!=1){
            //     sum+=i;
            //     sum+=n/i;
            // }
            // else sum+=i;  
            sum+=i;  
        }
    }
    if(sum==n) return 1;
    else return 0;
}

int main() {
    int a,b; 
    scanf("%d%d", &a, &b);
    if(a<b){
        for(int i=a; i<=b; i++){
            if(SoHoanHao(i)) printf("%d ", i);
        }
    }
    else{
        for(int i=b; i<=a; i++){
            if(SoHoanHao(i)) printf("%d ", i);
        }
    }
    
}