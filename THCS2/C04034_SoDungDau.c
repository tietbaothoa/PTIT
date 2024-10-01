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
        int n;
        scanf("%d", &n);
        int a[n+5];
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);
        for(int i=0; i<n; i++){
            int check=1;
            for(int j=i+1; j<n; j++){
                if(a[j]>=a[i]){
                    check=0;
                    break;
                }
            }
            if(check==1) printf("%d ", a[i]);
        }
        el;
    }
}