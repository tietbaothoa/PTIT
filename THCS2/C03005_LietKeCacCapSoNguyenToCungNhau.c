#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int KtraNTCN(int a, int b){
    while(b!=0){
            int tmp=a%b;
            a=b;
            b=tmp;
        }
    if(a==1) return 1;
    else return 0;
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    for(int i=a; i<=b; i++){
        for(int j=a; j<=b; j++){
            if (i<j && KtraNTCN(i,j)) printf("(%d,%d)\n", i, j);
        }
    }
}