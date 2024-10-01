#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
            // if(i!=1 && i*i!=n) sum+= n/i;
            // else continue;
        }
    }
    if(sum==n) printf("1");
    else printf("0");
}