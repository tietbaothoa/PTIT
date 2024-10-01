#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int SoHoanHao(int n){
    int sum=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            sum+=i;
            if(i*i==n || i==1) continue;
            else   
                sum+=n/i;
        }
    }
    if(sum==n) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if(SoHoanHao(i)) 
            printf("%d ", i);
    }
}