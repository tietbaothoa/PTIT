#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    getchar();
    while (test--) {
        char a[205];
        gets(a);
        int count=0;
        for(int i=0; i<strlen(a); i++){
            if(i==0 && a[i]!=' '){
                count++;
            }
            else{
                if(a[i]!=' ' && a[i-1]==' '){
                    count++;
                }
            }
        }
        printf("%d", count);
        el;
    }
}