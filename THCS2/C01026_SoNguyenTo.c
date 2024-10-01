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
        int n;
        scanf("%d", &n);
        int check=1;
        if(n<2) check=0;
        else{
            for(int i=2; i<sqrt(n); i++){
                if(n%i==0){
                    check=0;
                    break;
                }
            }
        }
        if(check) printf("YES");
        else printf("NO");
        el;
    }
}