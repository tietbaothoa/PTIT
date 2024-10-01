#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

void dao(char a[]){
    char b[1000];
    int j=0;
    for(int i=strlen(a)-1; i>=0; i--){
        b[j++]=a[i];
    }
    b[strlen(a)]='\0';
    strcpy(a,b);
}

void TinhTong(char a[], char b[], char n[]){
    dao(a);
    dao(b);
    char tong[200]={};
    if(strlen(a)>strlen(b)){
        for(int i=strlen(b); i<strlen(a); i++) b[i]='0';
    }
    if(strlen(b)>strlen(a)){
        for(int i=strlen(a); i<strlen(b); i++) a[i]='0';
    }
    int len=strlen(a);
    int nho=0;
    for(int i=0; i<len; i++){
        tong[i]=((a[i]-'0')+(b[i]-'0')+nho)%10 + '0';
        nho=((a[i]-'0') + (b[i]-'0') + nho)/10;
    }
    if(nho>0) tong[strlen(a)]=nho+'0';
    dao(tong);
    printf("%s \n", tong);
    strcpy(n,tong);
}


int main() {
    char n[205];
    gets(n);
    while(1){
        int len=strlen(n);
        if(len<2) break; 
        char a[105]={};
        char b[105]={};
        int index1=0;
        for(int i=0; i<len/2; i++){
            a[index1++]=n[i];
        }
        a[index1]='\0';
        int index2=0;
        for(int i=len/2; i<len; i++){
            b[index2++]=n[i];
        }
        b[index2]='\0';
        TinhTong(a,b,n); 
    }
}