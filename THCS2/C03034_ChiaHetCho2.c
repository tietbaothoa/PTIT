#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

// int KtraChanLe(int n){
//     if(n%2==0) return 1;
//     else return 0;
// }

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        long long n;
        scanf("%lld", &n);
        long long count=0;
        if(n%2==0) count++;
        for(long long i=2; i<=sqrt(n); i++){
                if(n%i==0){
                    if(i%2==0) count++;
                    if(i*i != n && (n/i)%2==0) count++; 
            }
        }
        printf("%lld", count);
        el;
    }
}