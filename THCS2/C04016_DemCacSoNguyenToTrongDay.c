#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int nto(int n){
    if(n<2) return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}

void SapXep(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}

int main() {
    int test;
    scanf("%d",&test);
    int t=0;
    while (test--) {
        t++;
        int n;
        scanf("%d", &n);
        int a[n+5];
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
       // SapXep(a, n);
        int b[100005]={};
        for(int i=0; i<n; i++){
            if(nto(a[i])) b[a[i]]++;
        }
        printf("Test %d:\n", t);
        for(int i=0; i<100000; i++){
            if(b[i]>0) printf("%d xuat hien %d lan\n", i, b[i]);
        }
        el;
    }
}