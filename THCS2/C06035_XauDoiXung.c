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
        char a[25];
        gets(a);
        int n=strlen(a);
        int check=0;
        for(int i=0; i<n/2; i++){
            if(a[i]!=a[n-i-1])
                check++;
        }
        if(check==1 || n==1) printf("YES");
        else if(check==0 && n%2==1) printf("YES");
        else printf("NO");
        el;
    }
}