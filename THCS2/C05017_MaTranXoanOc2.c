#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        int m, n;
        scanf("%d%d", &m, &n);
        int a[m+5][n+5];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%d", &a[i][j]);
            }
        }
        int hang1=0, cot1=0, hang2=n-1, cot2=n-1;
        int count=0;
        while(hang1<=n/2){
            for(int i=cot1; i<=cot2; i++){
                count++;
                if(count<=n*m){
                    printf("%d ", a[hang1][i]);
                }
            }
            for(int i=hang1+1; i<=hang2; i++){
                count++;
                if(count<=n*m)
                    printf("%d ", a[i][cot2]);
            }
            for(int i=cot2-1; i>=cot1; i--){
                count++;
                if(count<=n*m) 
                    printf("%d ", a[hang2][i]);
            }
            for(int i=hang2-1; i>=hang1+1; i--){
                count++;
                if(count<=n*m)
                    printf("%d ", a[i][cot1]);
            }
            hang1++; cot1++; hang2--; cot2--;
        }
        el;
    }
}