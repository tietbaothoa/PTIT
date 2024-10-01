#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int SoDep(char a[]){
    int n=strlen(a);
    for(int i=0; i<n; i++){
        if((a[i]-'0')%2!=0) return 0;
        if(a[i]!=a[n-i-1]) return 0;
    }
    return 1;
}

int main() {
    int test;
    scanf("%d",&test);
    getchar();
    while (test--) {
        char a[505];
        gets(a);
        if(SoDep(a)) printf("YES");
        else printf("NO");
        el;
    }
}