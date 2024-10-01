#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        long long n;
        scanf("%lld", &n);
        int m=n;
        int check=1;
        while(n){
            int a=n%10;
            n=n/10;
            if(a%2!=0){
                check=0;
                break;
            }
        }
        if(m%2==0 && check) printf("YES");
        else printf("NO");
        el;
    }
}