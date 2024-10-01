#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int Ktrahcs(char a[]){
    int len=strlen(a);
    for(int i=0; i<len; i++){
        if(a[i]!='0' && a[i]!='1' && a[i]!='2'){
            return 0;
        }
    }
    return 1;
}

int main() {
    int test;
    scanf("%d",&test);
    getchar();
    while (test--) {
        char a[20];
        gets(a);
        if(Ktrahcs(a)) printf("YES");
        else printf("NO");
        el;
    }
}