#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int DauCuoi(char a[]){
    int n=strlen(a);
    if((a[0]-'0') == 2*(a[n-1]-'0') || (2*(a[0]-'0') == a[n-1]-'0')){
        return 1;
    }
    else return 0;
}

int SoThuanNghich(char a[]){
    int n=strlen(a);
    for(int i=1; i<=n/2; i++){
        if(a[i]!=a[n-1-i])
            return 0;
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
        if(DauCuoi(a) && SoThuanNghich(a)) printf("YES");
        else printf("NO");
        el;
    }
}