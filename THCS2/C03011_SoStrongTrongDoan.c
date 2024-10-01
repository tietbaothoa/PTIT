#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int GiaiThua(int n){
    int tich=1;
    if(n==0 || n==1) return 1;
    else{
        for(int i=1; i<=n; i++){
            tich*=i;
        }
        return tich;
    }
}

int TinhTongGiaiThua(int n){
    int sum=0;
    int k=n;
    while(k){
        int a=k%10;
        k/=10;
        sum+=GiaiThua(a);
    }
    if(sum==n) return 1;
    else return 0;

}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if(a<b){
        for(int i=a; i<=b; i++){
            if(TinhTongGiaiThua(i)) printf("%d ", i);
        }
    }
    else{
        for(int i=b; i<=a; i++){
            if(TinhTongGiaiThua(i)) printf("%d ", i);
        }
    }
}

