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
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        int b[100005]={};
        int check=0;
        for(int i=0; i<n; i++){
            b[a[i]]++;
            if( b[a[i]]>1) check=1;
        }
        if(check==1){
            for(int i=0; i<n; i++){
                if(b[a[i]]>1){
                    printf("%d", a[i]);
                    break;
                }
            }
        }
        else printf("NO");
        el;
    }
}