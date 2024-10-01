#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int TongChuSo(char a[]){
    int n=strlen(a);
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=(a[i]-'0');
    }
    if(sum%10==0) return 1;
    else return 0;
}

int SoDep(char a[]){
    int n=strlen(a);
    if(a[0]-'0'!=8 || a[n-1]-'0'!=8) return 0;
    for(int i=0; i<n; i++){
        if(a[i]!=a[n-i-1]) return 0;
    }
    if(!TongChuSo(a)) return 0;
    else return 1;
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