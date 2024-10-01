#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    int count=0;
    int arr[100000];
    int index=0;
    for(int i=a; i<=b; i++){
        int n=sqrt(i);
        if(n*n==i) {
            arr[index++]=i;
            count++;
        }
        if(index==2) break;
    }
    // while(a<=b){
    //     int n=sqrt(a);
    //     if(n*n==a){
    //         printf("%d\n", a);
    //         dem++;
    //     }
    //     int a1=a;
    //     a++;
    //     if(dem==2){

    //         break;
    //     }
    int d = arr[1]-arr[0];
    int n=arr[1];
    while(n<=b){
        d+=2;
        n+=d;
        if(n<=b){
            arr[index++]=n;
            count++;
        }
        else break;
    }
    printf("%d\n", count);
    for(int i=0; i<index; i++){
        printf("%d\n", arr[i]);
    }
}