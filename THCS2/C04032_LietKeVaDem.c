#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int sotang(int n){
    int a[10];
    int index=0;
    while(n){
        int a[index++]=n%10;
        n/=10;
    }
    for(int i=0; i<index; i++){
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}

void SapXep(int a[], int b[], int n){
    
}

int main() {
    int index=0;
    int a[100001];
    while(scanf("%d", a[index]!=-1))
        index++;
    int b[100001]={};
    int count=0;
    for(int i=0; i<index; i++){
        if(sotang(a[i])){
            b[a[i]]++;
            if(b[a[i]]==1) count++;
        }
    }
    for(int i=0; i<1000000000; i++){
        if(b[i]!=0){

        }
    }
}