#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    char a[20];
    while (test--) {
        scanf("%s", &a);
        int check=1;
        for(int i=1; i<strlen(a); i++){
            if(a[i]<a[i-1]){
                check=0;
                printf("NO");
                break;
            }
        }
        if(check==1) printf("YES");
        el;
    }
}