#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

void dao(char a[]){
    int len=strlen(a);
    char b[1000];
    int j=0;
    for(int i=len-1; i>=0; i--){
        b[j++]=a[i];
    }
    b[len]='\0';
    strcpy(a,b);
}

void TinhTong(char a[], char b[]){
    dao(a);
    dao(b);
    if(strlen(a) > strlen(b)){
        for(int i=strlen(b); i<strlen(a); i++){
            b[i]='0';
        }
    }
    if(strlen(a) < strlen(b)){
        for(int i=strlen(a); i<strlen(b); i++){
            a[i]='0';
        }
    }
    int n =strlen(a);
    char tong[1000]={};
    int nho=0;
    for(int i=0; i<n; i++){
        tong[i]=((a[i]-'0') + (b[i]-'0') + nho)%10 +'0';
        nho=((a[i]-'0') + (b[i]-'0') + nho)/10;
    }
    if(nho>0) tong[n]=nho + '0';
    dao(tong);
    printf("%s", tong);
}

int main() {
    int test;
    scanf("%d\n",&test);
    while (test--) {
        char a[1000];
        char b[1000];
        gets(a);
        gets(b);
        TinhTong(a,b);
        el;
    }
}