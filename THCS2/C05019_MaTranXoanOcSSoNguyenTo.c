#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")C06024

int nto(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main() {
    int test;
    scanf("%d",&test);
    int cnt=0;
    while (test--) {
        cnt++;
        int n;
        scanf("%d", &n);
        int a[n][n];
        int b[n*n];
        int count=0;
        // int i=2;
        for(int i=2; count!=n*n; i++){
            if(nto(i)==1){
                b[count++]=i;
            }
            // i++;
        }
        int hang1=0, hang2=n-1, cot1=0, cot2=n-1;
        int dem=0;
        while(hang1<=n/2){
            for(int i=cot1; i<=cot2; i++) a[hang1][i]=b[dem++]; 
            for(int i=hang1+1; i<=hang2; i++) a[i][cot2]=b[dem++];
            for(int i=cot2-1; i>=cot1; i--) a[hang2][i]=b[dem++]; 
            for(int i=hang2-1; i>=hang1 + 1; i--) a[i][cot1]=b[dem++];
            hang1++; cot1++; hang2--; cot2--;
        }
        printf("Test %d: \n", cnt);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%d ", a[i][j]);
            }
            el;
        }
        el;
    }
}
